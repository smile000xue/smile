#include "stm32f10x.h"                  // Device header
#include "Oled.h"


int main(void)
{
	OLED_Init();
	OLED_ShowChar(1, 1, 'A' );
	OLED_ShowString(1, 3, "Smile");
	OLED_ShowNum(2, 1, 88, 2);
	OLED_ShowSignedNum(2, 5, -88, 2);
	OLED_ShowHexNum(3, 1, 0x8C, 2);
	OLED_ShowBinNum(4, 1, 0x86, 8);
	while(1)	
	{
		
	}
}
