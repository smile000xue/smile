#include "stm32f10x.h"    		// Device header
#include "Delay.h"
#include "Key.h"
#include "OLED.h"
#include "PWM.h"
#include "SERVO.h"

int main(void)
{
	uint8_t Number,Angle;
	
	Key_Init();
	Servo_Init();
	OLED_Init();
	
	OLED_ShowString(1, 1, "Angle:");
	OLED_ShowNum(1, 7, Angle,3);
	while(1)	
	{
		
		Number=Key();
		if(Number==1)
		{
			Servo_SetAngle(Angle);
			OLED_ShowNum(1, 7, Angle,3);
			Angle+=10;
		}
		if(Angle>180)  Angle=0;
		
	}
}
