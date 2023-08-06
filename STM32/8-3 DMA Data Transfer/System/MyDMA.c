#include "stm32f10x.h"                  // Device header

uint8_t DataNumber;

/**
  * @brief   配置DMA，初始化  
  * @param	 Addr1：源数据起始地址
  * @param   Addr2：目的地数据起始地址
  * @param   Size：传输大小
  * @retval  无
  */
void MyDMA_Init(uint32_t Addr1,uint32_t Addr2,uint8_t Size)
{
	DataNumber=Size;
	//开启DMA的时钟
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1,ENABLE);
	
	//初始化DMA结构体，配置基地址，DMA地址，设置传输次数
	DMA_InitTypeDef DMA_InitStructure;
	DMA_InitStructure.DMA_PeripheralBaseAddr=Addr1;
	DMA_InitStructure.DMA_PeripheralDataSize=DMA_PeripheralDataSize_Byte;
	DMA_InitStructure.DMA_PeripheralInc=DMA_PeripheralInc_Enable;
	DMA_InitStructure.DMA_MemoryBaseAddr=Addr2;
	DMA_InitStructure.DMA_MemoryDataSize=DMA_MemoryDataSize_Byte;
	DMA_InitStructure.DMA_MemoryInc=DMA_MemoryInc_Enable;
	DMA_InitStructure.DMA_BufferSize=Size;
	DMA_InitStructure.DMA_DIR=DMA_DIR_PeripheralSRC;
	DMA_InitStructure.DMA_M2M=DMA_M2M_Enable;
	DMA_InitStructure.DMA_Mode=DMA_Mode_Normal;
	DMA_InitStructure.DMA_Priority=DMA_Priority_High;
	DMA_Init(DMA1_Channel1,&DMA_InitStructure);
	
	//使能DMA
	DMA_Cmd(DMA1_Channel1,DISABLE);
}

/**
  * @brief   开启DMA转运数据  
  * @param   无
  * @retval  无
  */
void DMA_Transfer(void)
{
	DMA_Cmd(DMA1_Channel1,DISABLE);
	DMA_SetCurrDataCounter(DMA1_Channel1,DataNumber);//设置传输大小
	DMA_Cmd(DMA1_Channel1,ENABLE);
	
	while(DMA_GetFlagStatus(DMA1_FLAG_TC1)==RESET);
	DMA_ClearFlag(DMA1_FLAG_TC1);
}
