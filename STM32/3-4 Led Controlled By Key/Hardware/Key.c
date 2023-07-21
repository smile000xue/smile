#include "stm32f10x.h"                  // Device header
#include "Delay.h"

/**
  * @brief  初始化按键
  * @param  无  
  * @retval 无
  */
void Key_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_11|GPIO_Pin_1;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOB,&GPIO_InitStructure);
	
}

/**
  * @brief  返回按键的数码值
  * @param  无  
  * @retval 按键数码值
  */
uint8_t Key(void)
{
	uint8_t Keynumber=0;
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0)
	{
	   Delay_ms(20);
	   while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_1)==0);
	   Delay_ms(20);
	   Keynumber=1;
	}
	if(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0)
	{
	   Delay_ms(20);
	   while(GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_11)==0);
	   Delay_ms(20);
	   Keynumber=2;
	}
	
	return Keynumber;		
}

