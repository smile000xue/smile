#include <REGX52.H>

sfr LED=0xA0;

void Delay(unsigned char i)
{
	while(i--);
}

void main()
{
	unsigned char i,j=0;
	while(1)
	{
		for(i=0;i<100;i++)
		{
			for(j=0;j<20;j++)
		{
			LED=0x00;
		  Delay(i);
		  LED=0xFF;
		  Delay(100-i);
			
		}
		}
		
		for(i=100;i>0;i--)
		{
			for(j=0;j<20;j++)
		{
			LED=0x00;
		  Delay(i);
		  LED=0xFF;
		  Delay(100-i);
		}
		}	
	}
}