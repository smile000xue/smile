#include <REGX52.H>
#include "AT24C02.h"
#include "Nixie.h"
#include "Timer0.h"
#include "Key.h"
#include "Delay.h"

unsigned char keynumber,flag=0;
unsigned char min,sec,minisec=0;

void main()
{
	Timer0_Init();
	while(1)
	{
		keynumber=Key();
		if(keynumber==1)
		{
			flag=!flag;
		}
		if(keynumber==2)
		{
			min=0;
			sec=0;
			minisec=0;
		}
		if(keynumber==3)
		{
			WriteByte(0,minisec);
			Delay(10);
			WriteByte(1,sec);
			Delay(10);
			WriteByte(2,min);
			Delay(10);
		}
		if(keynumber==4)
		{
			minisec=ReadByte(0);
			sec=ReadByte(1);
			min=ReadByte(2);
		}
		NixieSetBuf(1,min/10);
		NixieSetBuf(2,min%10);
		NixieSetBuf(3,11);
		NixieSetBuf(4,sec/10);
		NixieSetBuf(5,sec%10);
		NixieSetBuf(6,11);
		NixieSetBuf(7,minisec/10);
		NixieSetBuf(8,minisec%10);
	}
}
/**
  * @brief  秒表驱动函数，在中断中调用
  * @param  无
  * @retval 无
  */
void Settime(void)
{
	if(flag)
	{
		minisec++;
		if(minisec>=100)
		{
			minisec=0;
			sec++;
			if(sec>=60)
			{
				sec=0;
				min++;
				if(min>=60)
				{
					min=0;
				}
			}
		}
				
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count1,T0Count2,T0Count3;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count1++;
	if(T0Count1>=10)
	{
		T0Count1=0;
		Settime();
	}
	T0Count2++;
	if(T0Count2>=20)
	{
		T0Count2=0;
		KeyLoop();
	}
	T0Count3++;
	if(T0Count3>=2)
	{
		T0Count3=0;
		NixieLoop();
	}
}