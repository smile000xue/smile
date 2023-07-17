#include <REGX52.H>
#include "Delay.h"
#include "Timer1.h"
#include "IR.h"
#include "Nixie.h"


unsigned char T0Count,Mode,Compare=0;

void main()
{
	IrInit();
	Timer1Init();
	
	while(1)
	{
		if(IrCommand==0x16)Mode=0;
		if(IrCommand==0x0C)Mode=1;
		if(IrCommand==0x18)Mode=2;
		if(IrCommand==0x5E)Mode=3;
		
		if(Mode==0)Compare=0;
		if(Mode==1)Compare=50;
		if(Mode==2)Compare=75;
		if(Mode==3)Compare=100;
		
		Nixie(1,Mode);
	}
}

//定时器1中断函数
void Timer1_Routine() interrupt 3
{
	TL1 = 0x9C;		//设置定时初值
	TH1 = 0xFF;		//设置定时初值
	T0Count++;
	T0Count%=100;
	
	if(T0Count<Compare)P1_0=1;
	  else P1_0=0;
}

