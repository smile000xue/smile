#include "stm32f10x.h"    		// Device header
#include "Delay.h"
#include "PWM.h"


int main(void)
{
	uint16_t i;
	PWM_Init();
	while(1)	
	{
		for(i=0;i<100;i++)
		{
			PWMTIM_SetCompare1(i);
			Delay_ms(10);
		}
		for(i=0;i<100;i++)
		{
			PWMTIM_SetCompare1(100-i);
			Delay_ms(10);
		}
		
	}
}
