#include <REGX52.H>
#include "LCD1602.h"
#include "IR.h"

unsigned char Number=0;

void main()
{
	LCD_Init();
	IrInit();//初始化红外光解码函数
	
	LCD_ShowString(1,1,"Add  Com  Num");
	while(1)
	{
		LCD_ShowHexNum(2,1,IrAddress,2);
		LCD_ShowHexNum(2,6,IrCommand,2);
		
		if(IrCommand==0x15 && IrRepeat>0)
		{
				Number--;
				IrRepeat--;z
		}
		if(IrCommand==0x09 && IrRepeat>0)
			{
				Number++;
				IrRepeat--;
			}
		LCD_ShowNum(2,11,Number,3);
	}
}

