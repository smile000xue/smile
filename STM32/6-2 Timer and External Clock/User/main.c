#include "stm32f10x.h"                  // Device header
#include "OLED.h"
#include "TIMER.h"


int main(void)
{
	OLED_Init();
	Timer_Init();
	
	OLED_ShowString(1, 1, "Number:");
	OLED_ShowString(2, 1, "Count:");
	while(1)	
	{
		OLED_ShowNum(1, 8, Number,5);
		OLED_ShowNum(2, 8, Timer_GetCounter(),5);
	}
}
