#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "RotaryEncoder.h"


int main(void)
{
	int16_t Number=0;
	RotaryEncoder_Init();
	OLED_Init();
	
	OLED_ShowString(1, 1, "Count:");
	while(1)	
	{
		Number+=RotaryEnconder_Get();
		
		OLED_ShowSignedNum(1, 7, Number, 3);
	}
}
