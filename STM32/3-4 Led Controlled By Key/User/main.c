#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "LED.h"
#include "Key.h"

uint8_t Keynumber=0;

int main(void)
{
	LED_Init();
	Key_Init();
	while(1)	
	{
		Keynumber=Key();
		if(Keynumber==1)
		{
			Led_Turn(GPIO_Pin_1);
		}
		if(Keynumber==2)
		{
			Led_Turn(GPIO_Pin_2);
		}
	}
}


