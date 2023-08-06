#include "stm32f10x.h"                  // Device header
#include "Oled.h"
#include "ADC.h"
#include "Delay.h"


int main(void)
{
	OLED_Init();
	AD_Init();
	
	OLED_ShowString(1,1,"AD1:0000");
	OLED_ShowString(2,1,"AD2:0000");
	OLED_ShowString(3,1,"AD3:0000");
	OLED_ShowString(4,1,"AD4:0000");
	while(1)	
	{
//		AD_GetValue();

		OLED_ShowNum(1,5,Arr[0],4);
		OLED_ShowNum(2,5,Arr[1],4);
		OLED_ShowNum(3,5,Arr[2],4);
		OLED_ShowNum(4,5,Arr[3],4);
		
		Delay_ms(100);
	}
}
