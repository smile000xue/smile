#include <REGX52.H>
#include "Delay.h"

unsigned char Key_number=0;

unsigned char Key(void)
{
	unsigned char tmp=0;
	tmp=Key_number;
	Key_number=0;
	
	return tmp;
}

unsigned char check(void)
{
	unsigned char Number=0;
	
	if(P3_1==0)Number=1;
	if(P3_0==0)Number=2;
	if(P3_2==0)Number=3;
	if(P3_3==0)Number=4;
	
	return Number;
}

void KeyLoop(void)
{
	static unsigned char Nowstate,Laststate=0;
	Laststate=Nowstate;
	Nowstate=check();
	if(Nowstate==0&&Laststate==1)
	{
		Key_number=1;
	}
	if(Nowstate==0&&Laststate==2)
	{
		Key_number=2;
	}
	if(Nowstate==0&&Laststate==3)
	{
		Key_number=3;
	}
	if(Nowstate==0&&Laststate==4)
	{
		Key_number=4;
	}
}
