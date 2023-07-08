#include <REGX52.H>
#include "LCD1602.h"
#include "DS18B02.h"
#include "Delay.h"

float temp=0;

void main()
{
	
	TempConvert();
	Delay(1000);
	
	LCD_Init();
	LCD_ShowString(1,1,"Temperature:");
	
	while(1)
	{
		TempConvert();
		temp=TempRead();
		if(temp<0)
		{
			temp=-temp;
			LCD_ShowChar(2,1,'-');
		}
		else
		{
			LCD_ShowChar(2,1,'+');
		}
		LCD_ShowNum(2,2,temp,3);
		LCD_ShowChar(2,5,'.');
		LCD_ShowNum(2,6,(unsigned long)(temp*10000)%10000,4);
		
	}
}