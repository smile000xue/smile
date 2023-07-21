#include "stm32f10x.h"                  // Device header

/**
  * @brief  初始化蜂鸣器，启动时钟，定义GPIO
  * @param  无
  * @retval 无
  */
void Buzzer_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP; //Out Push Pull
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	
	GPIO_SetBits(GPIOB,GPIO_Pin_12);
}
/**
  * @brief  开启蜂鸣器
  * @param  无
  * @retval 无
  */
void Buzzer_On(void)
{
	GPIO_ResetBits(GPIOB,GPIO_Pin_12);
}

/**
  * @brief  关闭蜂鸣器
  * @param  无
  * @retval 无
  */
void Buzzer_Off(void)
{
	GPIO_SetBits(GPIOB,GPIO_Pin_12);
}

/**
  * @brief  蜂鸣器翻转，一响一灭
  * @param  无
  * @retval 无
  */
void Buzzer_Turn(void)
{
	if(GPIO_ReadOutputDataBit(GPIOB,GPIO_Pin_12)==0)
	{
		GPIO_SetBits(GPIOB,GPIO_Pin_12);
	}
	else
	{
		GPIO_ResetBits(GPIOB,GPIO_Pin_12);
	}
}
