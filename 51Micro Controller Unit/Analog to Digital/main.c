#include <REGX52.H>
#include "LCD1602.h"
#include "Xpt2046.h"
#include "Delay.h"

void main()
{
	unsigned int AdValue=0;
	LCD_Init();
	LCD_ShowString(1,1,"ADJ  NTC  GR");
	while(1)
	{
		AdValue=Xpt2046_ReadAD(Xpt2046_XP);			//读取AIN0，可调电阻
		LCD_ShowNum(2,1,AdValue,3);							//显示AIN0
		AdValue=Xpt2046_ReadAD(Xpt2046_YP);			//读取AIN1，热敏电阻
		LCD_ShowNum(2,6,AdValue,3);							//显示AIN1
		AdValue=Xpt2046_ReadAD(Xpt2046_VBAT);		//读取AIN2，光敏电阻
		LCD_ShowNum(2,11,AdValue,3);        		//显示AIN2
		Delay(50);
	}
}
