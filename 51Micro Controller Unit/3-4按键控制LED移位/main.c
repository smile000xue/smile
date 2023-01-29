#include <REGX52.H>
#include <INTRINS.H>

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

void main()
{
	char add=0;
	P2=0xFE;
	while(1)
	{
		if(P3_1==0)
		{
			Delay(20);
			while(P3_1==0);
			Delay(20);
			
			add++;
			if(add>=8)
				add=0;
			P2=~(0x01<<add);
		}
		if(P3_0==0)
		{
			Delay(20);
			while(P3_0==0);
			Delay(20);
			
			add--;
			if(add<=-1)
				add=7;
			P2=~(0x01<<add);
		}			
	}
			
	
}