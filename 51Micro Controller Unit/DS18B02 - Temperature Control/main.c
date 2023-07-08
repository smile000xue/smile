#include <REGX52.H>
#include "LCD1602.h"
#include "DS18B02.h"
#include "Delay.h"
#include "Key.h"
#include "Timer0.h"
#include "AT24C02.h"


void main()
{
	float temp ,T=0;
	unsigned char keynumber=0;
	char Hihgest,Lowest=0;
	
	Lowest=AT24C02ReadByte(0);//读取温度阈值数据
	Hihgest=AT24C02ReadByte(1);
	
	if(Hihgest>125||Lowest<-55||Lowest>=Hihgest)
	{
		Hihgest=30;//如果阈值非法，则设为默认值
		Lowest=20;
	}
	
	TempConvert();//上电先转换一次温度，防止第一次读数据错误
	Delay(1000);
	
	Timer0Init();
	LCD_Init();
	
	LCD_ShowString(1,1,"T:");
	LCD_ShowString(2,1,"H:");
	LCD_ShowString(2,8,"L:");
	while(1)
	{
		/*温度读取及显示*/
		TempConvert();
		temp=TempRead();
		T=temp;
		if(temp<0)
		{
			temp=-temp;
			LCD_ShowChar(1,3,'-');
		}
		else
		{
			LCD_ShowChar(1,3,'+');
		}
		LCD_ShowNum(1,4,temp,3);
		LCD_ShowChar(1,7,'.');
		LCD_ShowNum(1,8,(unsigned long)(temp*10000)%10000,4);
		
		/*阈值判断及显示*/
		keynumber=Key();
		if(keynumber)
		{
			if(keynumber==1)
			{
				Hihgest++;
				if(Hihgest>125) Hihgest--;
			}
			if(keynumber==2)
			{
				Hihgest--;
				if(Hihgest<=Lowest)Hihgest++;
			}
			if(keynumber==3)
			{
				Lowest++;
				if(Hihgest<=Lowest)Lowest--;
			}
			if(keynumber==4)
			{
				Lowest--;
				if(Lowest<-55) Lowest++;
			}
		}
		
		LCD_ShowSignedNum(2,3,Hihgest,3);//显示阈值数据
		LCD_ShowSignedNum(2,10,Lowest,3);
		
		AT24C02WriteByte(0,Lowest);//写入到At24C02中保存
		Delay(5);
		AT24C02WriteByte(1,Hihgest);
		Delay(5);
		
		if(Hihgest<T) LCD_ShowChar(1,16,'H');//越界判断
		else if(T<Lowest) LCD_ShowChar(1,16,'L');
		else LCD_ShowChar(1,16,' ');
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count++;
	if(T0Count>=20)
	{
		T0Count=0;
		KeyLoop();  //每20ms调用一次按键驱动函数
	}
}