#include "stm32f10x.h"                  // Device header

uint16_t Number=0;

void Timer_Init(void)
{
	
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM2,ENABLE);//开启RCC_APB1的TIM2处的外设时钟
	
	TIM_InternalClockConfig(TIM2);//TIM2的时基单元由内部时钟驱动
	
	//配置时基单元
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure; 
	TIM_TimeBaseInitStructure.TIM_Prescaler=10000-1;//预分频
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up;//向上计数
	TIM_TimeBaseInitStructure.TIM_Period=7200-1;//计数周期
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStructure.TIM_RepetitionCounter=0;
	TIM_TimeBaseInit(TIM2,&TIM_TimeBaseInitStructure);
	TIM_ClearFlag(TIM2,TIM_FLAG_Update);//清楚标志位，复位后从0开始计时
	
	TIM_ITConfig(TIM2, TIM_IT_Update, ENABLE);//使能中断
	
	//开启NVIC
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//开启NVIC
	
	NVIC_InitTypeDef NVIC_InitStructure;
	NVIC_InitStructure.NVIC_IRQChannel=TIM2_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority=2;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority=1;
	NVIC_InitStructure.NVIC_IRQChannelCmd=ENABLE;
	NVIC_Init(&NVIC_InitStructure);
	
	TIM_Cmd(TIM2, ENABLE);
}

void TIM2_IRQHandler(void)
{
	if(TIM_GetITStatus(TIM2,TIM_IT_Update==SET))
	{
		Number++;
		TIM_ClearITPendingBit(TIM2,TIM_IT_Update);
	}
	
}
