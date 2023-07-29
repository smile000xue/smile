#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "TIMER.h"
#include "EnInterface.h"

int16_t Speed;

int main(void)
{
	
	OLED_Init();
	Timer_Init();
	EnInterface_Init();
	
	OLED_ShowString(1, 1, "Speed:");
	while(1)	
	{
		OLED_ShowSignedNum(1, 7, Speed,5);
	}
}

void TIM2_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM2,TIM_IT_Update==SET))
	{
		Speed=EnInterface_GetCnt();
		TIM_ClearITPendingBit(TIM2,TIM_IT_Update);
	}
}
