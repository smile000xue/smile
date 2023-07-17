#include <REGX52.H>
#include "Delay.h"
#include "Timer0.h"

sbit LED=P2^1;

unsigned char T0Count,Compare,i=0;//计数值和比较值，用于输出PWM

void main()
{
	Timer0Init();
	while(1)
	{
		for(i=0;i<100;i++)
		{
			Compare=i;
			Delay(5);
		}
		for(i=100;i>0;i--)
		{
			Compare=i;
			Delay(5);
		}
	}
}

void Timer0_Routine() interrupt 1
{
	TL0 = 0xA4;		//设置定时初值
	TH0 = 0xFF;		//设置定时初值
	T0Count++;
	T0Count%=100;//计数值变化范围限制在0~99
	if(T0Count<Compare)//计数值小于比较值
		{
			LED=1;//输出1
		}
	else//计数值大于比较值
		{
			LED=0;//输出0
		}
}