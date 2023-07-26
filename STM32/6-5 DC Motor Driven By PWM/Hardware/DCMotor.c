#include "stm32f10x.h"                  // Device header
#include "PWM.h"

void DCMotor_Init(void)
{
	PWM_Init();
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_4|GPIO_Pin_5|GPIO_Pin_10|GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	GPIO_ResetBits(GPIOA, GPIO_Pin_5);
	GPIO_SetBits(GPIOA, GPIO_Pin_4);
	GPIO_ResetBits(GPIOA, GPIO_Pin_10);
	GPIO_SetBits(GPIOA, GPIO_Pin_11);
}

void DCMotor_Speed(uint16_t Speed)
{
	PWMTIM_SetCompare3(Speed);
}
