#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "TIMER.h"


int main(void)
{
	OLED_Init();
	Timer_Init();
	
	OLED_ShowString(1, 1, "Count:");
	while(1)	
	{
		OLED_ShowNum(1, 7, Number,5);
		OLED_ShowNum(2, 7, TIM_GetCounter(TIM2),5);
	}
}
