#include "stm32f10x.h"                  // Device header

/**
  * @brief  输入捕获Input Capture初始化;初始化定时器时钟，初始化GPIO口时钟，配置时基单元，
            配置输入捕获单元,选择触发源，配置从模式为Reset，开启定时器
  * @param  无
  * @retval 无
  */
void ICaptureInit(void)
{
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);//开启RCC_APB1的TIM3处的外设时钟
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);//开启RCC_APB2的GPIOA处的外设时钟
	
	//初始化GPIO的Pin0号口
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_IPU;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_6;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	GPIO_Init(GPIOA,&GPIO_InitStructure);
	
	TIM_InternalClockConfig(TIM3);//TIM2的时基单元由内部时钟驱动
	
	//配置时基单元，频率：Freq = CK_PSC（72MHz） / (PSC + 1) / (ARR + 1)
	TIM_TimeBaseInitTypeDef TIM_TimeBaseInitStructure; 
	TIM_TimeBaseInitStructure.TIM_Prescaler=72-1;//预分频,PSC
	TIM_TimeBaseInitStructure.TIM_CounterMode=TIM_CounterMode_Up;//向上计数
	TIM_TimeBaseInitStructure.TIM_Period=65536-1;//计数周期,ARR
	TIM_TimeBaseInitStructure.TIM_ClockDivision=TIM_CKD_DIV1;
	TIM_TimeBaseInitStructure.TIM_RepetitionCounter=0;
	TIM_TimeBaseInit(TIM3,&TIM_TimeBaseInitStructure);
	
	//配置输入捕获单元参数
	TIM_ICInitTypeDef TIM_ICInitStructure;
	TIM_ICInitStructure.TIM_Channel=TIM_Channel_1;
	TIM_ICInitStructure.TIM_ICFilter=0xF;
	TIM_ICInitStructure.TIM_ICPolarity=TIM_ICPolarity_Rising;
	TIM_ICInitStructure.TIM_ICPrescaler=TIM_ICPSC_DIV1;
	TIM_ICInitStructure.TIM_ICSelection=TIM_ICSelection_DirectTI;
	TIM_PWMIConfig(TIM3,&TIM_ICInitStructure);//配置输入捕获单元2,配置为PWMI模式
	
	TIM_SelectInputTrigger(TIM3,TIM_TS_TI1FP1);		//选择触发源
	TIM_SelectSlaveMode(TIM3,TIM_SlaveMode_Reset);	//配置从模式为Reset
	
	TIM_Cmd(TIM3,ENABLE);//开启定时器
}

/**
* @brief  返回测定一个周期的频率;测试频率为fc，测试次数为N，测得频率即为fc/N
* @param  无
* @retval 最新一个周期的频率值
*/
uint32_t ICapture_GetFre(void)
{
	return 1000000/(TIM_GetCapture1(TIM3)+1);
}

/**
* @brief  返回占空比，高电平记数次在CCR2里，整个周期记数次在CCR1里
* @param  无
* @retval 测定的占空比
*/
uint32_t ICapture_GetDuty(void)
{
	return (TIM_GetCapture2(TIM3)+1)*100/(TIM_GetCapture1(TIM3)+1);
}
