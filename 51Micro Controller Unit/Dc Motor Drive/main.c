#include <REGX52.H>
#include "Delay.h"
#include "Timer0.h"
#include "Nixie.h"
#include "Key.h"

unsigned char Keynumber,T0Count,Mode,Compare=0;

void main()
{
	Timer0Init();
	
	while(1)
	{
		Keynumber=Key();
		if(Keynumber==1)
		{
			Mode++;
			Mode%=4;
		}
		if(Mode==0)
		{
			Compare=0;
		}
		if(Mode==1)
		{
			Compare=50;
		}
		if(Mode==2)
		{	
			Compare=75;
		}
		if(Mode==3)
		{
			Compare=100;
		}
		if(T0Count<Compare)
		{
			P1_0=1;
		}
	  else
		{
			P1_0=0;
		}
		
		Nixie(1,Mode);
	}
}

void Timer0_Routine() interrupt 1
{
	TL0 = 0xA4;		//设置定时初值
	TH0 = 0xFF;		//设置定时初值
	T0Count++;
	T0Count%=100;
}