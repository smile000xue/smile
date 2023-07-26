#include "stm32f10x.h"    		// Device header
#include "Delay.h"
#include "OLED.h"
#include "PWM.h"
#include "ICapture.h"


int main(void)
{
	OLED_Init();
	PWM_Init();
	ICaptureInit();
	
	PWMTIM_PrescalerConfig(7200-1);   //Fenguency:72MHz/PSC+1/100
	PWMTIM_SetCompare1(50);	       	 //Duty:CCR/100
	
	OLED_ShowString(1,1,"Frequency:00000");
	while(1)	
	{
		OLED_ShowNum(1,11,ICapture_GetFre(),5);
	}
}
