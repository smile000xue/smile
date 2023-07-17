#include <REGX52.H>
#include "Interrupt.h"
#include "Timer0.h"

unsigned char IrState,IrDataBit,IrAddress,IrCommand=0;
signed char IrRepeat=1;
unsigned char IrData[4]=0;
unsigned int IrTime=0;

/**
  * @brief  红外遥控初始化
  * @param  无
  * @retval 无
  */
void IrInit(void)
{
	Timer0Init();
	Interrupt_Init();
}

//外部中断0中断函数，下降沿触发执行
void Int0_Routine(void) interrupt 0
{
	if(IrState==0)//状态0，空闲状态
	{
		TimeClear();//定时计数器清0
		TimeRun(1);//定时器启动
		IrState=1;//置状态为1
	}
	else if(IrState==1)//状态1，等待Start信号或Repeat信号
	{
		IrTime=TimeGet();//获取上一次中断到此次中断的时间
		TimeClear();//定时计数器清0
		if(IrTime<12442+500&&IrTime>12442-500)//如果计时为12.442ms，则接收到了Start信号
		{
			IrState=2;//置状态为2
		}
		else if(IrTime>10368-500 && IrTime<10368+500)//如果计时为10.368ms，则接收到了Repeat信号
		{
			IrState=0;
      TimeRun(0);
			IrRepeat++;
		}
		else
		{
			IrState=0;
		}
	}
	else if(IrState==2)//状态2，解码数据
	{
		IrTime=TimeGet();//获取上一次中断到此次中断的时间
		TimeClear();//定时计数器清0
		if(IrTime<1032+500&&IrTime>1032-500)//如果计时为1032us，则接收到了数据0
		{
			IrData[IrDataBit/8]&=~(0x01<<(IrDataBit%8));//数据对应位清0
			IrDataBit++;//数据位置指针自增
		}
		else if(IrTime<2074+500&&IrTime>2074-500)//如果计时为2074us，则接收到了数据0
		{
			IrData[IrDataBit/8]|=(0x01<<(IrDataBit%8));//数据对应位置1
			IrDataBit++;//数据位置指针自增
		}
		else //接收出错
		{
			IrDataBit=0;//数据位置指针清0
			IrState=1;//置状态为1
		}
		if(IrDataBit>31)//如果接收到了32位数据
		{
			if((IrData[0]==~IrData[1])&&(IrData[2]==~IrData[3]))//数据验证
			{
				IrAddress=IrData[0];
				IrCommand=IrData[2];
			}
			IrDataBit=0;//数据位置指针清0
			IrState=0;//置状态为0
			TimeClear();//定时器停止	
		}
	}
}                                    