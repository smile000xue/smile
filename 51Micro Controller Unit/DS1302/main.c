#include <REGX52.H>
#include "LCD1602.h"
#include "DS1302.h"


void main()
{
	LCD_Init();
	DS1302_Init();
	
	LCD_ShowString(1,1,"  -  -  ");//静态字符初始化显示
	LCD_ShowString(2,1,"  :  :  ");

	Set_time();
	
	while(1)
	{
		Read_time();
		LCD_ShowNum(1,1,time[0],2);
		LCD_ShowNum(1,4,time[2],2);
		LCD_ShowNum(1,7,time[3],2);
		LCD_ShowNum(2,1,time[4],2);
		LCD_ShowNum(2,4,time[5],2);
		LCD_ShowNum(2,7,time[6],2);
	}	
}
