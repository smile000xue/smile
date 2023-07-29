#include "stm32f10x.h"                  // Device header

/**
  * @brief  初始化光敏传感器，开启RCC，定义GPIO
  * @param  无
  * @retval 无
  */
void Sensor_Init(void)
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOB,&GPIO_InitStructure);
}

/**
  * @brief  返回光敏值
  * @param  无
  * @retval 低于阈值为1，高于阈值为0；
  */
uint8_t Sensor_Drive(void)
{
	return GPIO_ReadInputDataBit(GPIOB,GPIO_Pin_13);
}
