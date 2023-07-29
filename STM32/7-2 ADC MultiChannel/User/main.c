#include "stm32f10x.h"                  // Device header
#include "Oled.h"
#include "ADC.h"
#include "Delay.h"

uint16_t AD1,AD2,AD3,AD4;

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
		AD1=AD_GetValue(ADC_Channel_0);
		AD2=AD_GetValue(ADC_Channel_1);
		AD3=AD_GetValue(ADC_Channel_2);
		AD4=AD_GetValue(ADC_Channel_3);

		
		OLED_ShowNum(1,5,AD1,4);
		OLED_ShowNum(2,5,AD2,4);
		OLED_ShowNum(3,5,AD3,4);
		OLED_ShowNum(4,5,AD4,4);
		
		Delay_ms(100);
	}
}
