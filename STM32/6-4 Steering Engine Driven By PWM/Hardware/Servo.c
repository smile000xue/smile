#include "stm32f10x.h"                  // Device header
#include "PWM.h"

/**
  * @brief  舵机初始化
  * @param  无
  * @retval 无
  */
void Servo_Init(void)
{
	PWM_Init();
}

/**
  * @brief  设置舵机角度
  * @param  舵机角度，范围0到180度
  * @retval 无
  */
void Servo_SetAngle(uint16_t Angle)
{
	if(Angle>180)  Angle=0;
	PWMTIM_SetCompare1(Angle*40/180+10);
}
