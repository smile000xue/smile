#include <REGX52.H>
#include "AT24C02.h"
#include "LCD1602.h"
#include "Key.h"
#include "Delay.h"

void main()
{
	unsigned char Keynumber=0;
	unsigned int num=0;
	
	LCD_Init();
	while(1)
	{
		Keynumber=Key();
		if(Keynumber)
		{
			if(Keynumber==1)
			{
				num++;
			}
			if(Keynumber==2)
			{
				num--;
			}
			if(Keynumber==3)
			{
				WriteByte(0,num%256);
				Delay(10);
				WriteByte(1,num/256);
				Delay(10);
				LCD_ShowString(2,1,"Write Ok");
				Delay(700);
				LCD_ShowString(2,1,"        ");
				
			}
			if(Keynumber==4)
			{
				num=ReadByte(0);
				num=num+ReadByte(1)*256;
				LCD_ShowString(2,1,"Read Ok");
				Delay(700);
				LCD_ShowString(2,1,"       ");
			}
		}
		LCD_ShowNum(1,1,num,5);
	}
}