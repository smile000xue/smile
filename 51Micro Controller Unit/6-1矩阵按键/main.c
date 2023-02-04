#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

void main()
{
	unsigned int number=0;
	LCD_Init();
	LCD_ShowString(1,1,"Password:");
	while(1)
	{
		number=MatrixKey();
		if(number)
		LCD_ShowNum(2,1,number,2);
		
	}
}