#include <REGX52.H>
#include <INTRINS.H>

#define SECONDS 2

unsigned char nixietable[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void Delay(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;

	while(xms--)
	{
	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	}
	
}

void nixie(location,number)
{
	switch(location)
	{
		case 1: P2_4=1;P2_3=1;P2_2=1; break;
		case 2: P2_4=1;P2_3=1;P2_2=0; break;
		case 3: P2_4=1;P2_3=0;P2_2=1; break;
		case 4: P2_4=1;P2_3=0;P2_2=0; break;
		case 5: P2_4=0;P2_3=1;P2_2=1; break;
		case 6: P2_4=0;P2_3=1;P2_2=0; break;
		case 7: P2_4=0;P2_3=0;P2_2=1; break;
		case 8: P2_4=0;P2_3=0;P2_2=0; break;
		
	}
	P0=nixietable[number];
	//����ܵ���Ӱ
	Delay(1);
	P0=0x00;
}

void main()
{
	
	while(1)
	{
	nixie(1,5);
	Delay(SECONDS);
	nixie(2,2);
	Delay(SECONDS);
	nixie(3,0);
	Delay(SECONDS);
	nixie(5,1);
	Delay(SECONDS);
	nixie(6,3);
	Delay(SECONDS);
	nixie(7,1);
	Delay(SECONDS);
	nixie(8,4);
	Delay(SECONDS);
	}
}