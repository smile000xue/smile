#include "stm32f10x.h"                  // Device header

/**
  * @brief  初始化LED的IO口
  * @param  无  
  * @retval 无
  */
void LED_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_1|GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	GPIO_SetBits(GPIOA,GPIO_Pin_1|GPIO_Pin_2);
	
}

/**
  * @brief  点亮GPIO_Pin处的LED
  * @param  GPIO口
  * @retval 无
  */
void Led_On(uint16_t GPIO_Pin)
{
	GPIO_ResetBits(GPIOA,GPIO_Pin);
}

/**
  * @brief  熄灭GPIO_Pin处的LED
  * @param  GPIO口
  * @retval 无
  */
void Led_Off(uint16_t GPIO_Pin)
{
	GPIO_SetBits(GPIOA,GPIO_Pin);
}

/**
  * @brief  转化LED的亮灭
  * @param  GPIO口
  * @retval 无
  */
void Led_Turn(uint16_t GPIO_Pin)
{
	if(GPIO_ReadOutputDataBit(GPIOA,GPIO_Pin)==0)
	{
		GPIO_SetBits(GPIOA,GPIO_Pin);
	}
	else
	{
		GPIO_ResetBits(GPIOA,GPIO_Pin);
	}	
}

