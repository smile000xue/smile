#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Buzzer.h"
#include "MHSensor.h"


int main(void)
{
	Buzzer_Init();
	Sensor_Init();
	while(1)	
	{
		
		if(Sensor_Drive()==1)
		{
			Buzzer_On();
		}
		else
		{
			Buzzer_Off();
		}
		
	}
}

