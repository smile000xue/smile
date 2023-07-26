#include "stm32f10x.h"    		// Device header
#include "Delay.h"
#include "Key.h"
#include "OLED.h"
#include "DCMOTOR.h"

int main(void)
{
	uint8_t Number,Speed;
	
	Key_Init();
	DCMotor_Init();
	OLED_Init();
	
	OLED_ShowString(1, 1, "Speed:");
	
	while(1)	
	{
		Number=Key();
		if(Number==1)
		{
			Speed+=20;
			if(Speed>100)  Speed=0;
		}
		DCMotor_Speed(Speed);
		OLED_ShowNum(1, 7, Speed,3);
			
	}
}
