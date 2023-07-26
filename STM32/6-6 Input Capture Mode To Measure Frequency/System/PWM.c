#include "stm32f10x.h"                  // Device header

/**
  * @brief  配置CCR和计数器CNT输出PWM波形
  * @param  无
  * @retval 无
  */
void PWM_Init(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2,ENABLE);//开启RCC_APB1的TIM2处的外设时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//开启RCC_APB2的GPIOA处的外设时钟
	
	//初始化GPIO的Pin0号口
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	TIM_InternalClockConfig(TIM2);//TIM2的时基单元由内部时钟驱动
	
	//配置时基单元，频率：Freq = CK_PSC（72MHz） / (PSC + 1) / (ARR + 1)
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure; 
	TIM_TimeBaseInitStructure.TIM_Prescaler=720-1;//预分频,PSC
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up;//向上计数
	TIM_TimeBaseInitStructure.TIM_Period=100-1;//计数周期,ARR
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStructure.TIM_RepetitionCounter=0;
	TIM_TimeBaseInit(TIM2,&TIM_TimeBaseInitStructure);
	
	//初始化输出比较单元，CNT<CCR时， REF置有效电平；CNT≥ CCR时， REF置无效电平
	TIM_OCInitTypeDef TIM_OCInitStructrue;
	TIM_OCStructInit(&TIM_OCInitStructrue);
	TIM_OCInitStructrue.TIM_OCMode=TIM_OCMode_PWM1;
	TIM_OCInitStructrue.TIM_OCPolarity=TIM_OCPolarity_High;
	TIM_OCInitStructrue.TIM_OutputState=TIM_OutputState_Enable;
	TIM_OCInitStructrue.TIM_Pulse=0;		//CCR
	TIM_OC1Init(TIM2,&TIM_OCInitStructrue);
	TIM_OC2Init(TIM2,&TIM_OCInitStructrue);
	TIM_OC3Init(TIM2,&TIM_OCInitStructrue);
	TIM_OC4Init(TIM2,&TIM_OCInitStructrue);
	
	//开启TIM2的运行控制
	TIM_Cmd(TIM2, ENABLE);
}

/**
  * @brief  设置输出比较值，产生一定的PWM波形
  * @param  CCR值
  * @retval 无
  */
void PWMTIM_SetCompare1(uint16_t Number)
{
	TIM_SetCompare1(TIM2, Number);
	TIM_SetCompare2(TIM2, Number);
	TIM_SetCompare3(TIM2, Number);
	TIM_SetCompare4(TIM2, Number);
}

/**
  * @brief  设置预分频值
  * @param  预分频值
  * @retval 无
  */
void PWMTIM_PrescalerConfig(uint16_t Number)
{
	TIM_PrescalerConfig(TIM2,Number,TIM_PSCReloadMode_Update);
}
