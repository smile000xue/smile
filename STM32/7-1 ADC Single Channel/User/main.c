#include "stm32f10x.h"                  // Device header
#include "Oled.h"
#include "ADC.h"
#include "Delay.h"

int main(void)
{
	uint16_t ADValue;
	float Voltage;
	
	OLED_Init();
	AD_Init();
	
	OLED_ShowString(1,1,"ADValue:0000");
	OLED_ShowString(2,1,"Voltage:0.00v");
	while(1)	
	{
		ADValue=AD_GetValue();
		Voltage=(float)ADValue/4095*3.3;
		
		OLED_ShowNum(1,9,ADValue,4);
		OLED_ShowNum(2,9,Voltage,1);
		OLED_ShowNum(2,11,(int)(Voltage*100)%100,2);
		
		Delay_ms(100);
	}
}
