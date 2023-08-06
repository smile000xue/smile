#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"
#include "MyDMA.h"

uint8_t arr1[4]={0x01,0x02,0x03,0x04};
uint8_t arr2[4]={0};

int main(void)
{
	OLED_Init();
	MyDMA_Init((uint32_t)arr1,(uint32_t)arr2,4);
	OLED_ShowString(1,1,"Data1:");
	OLED_ShowHexNum(1,7,(uint32_t)arr1,8);
	OLED_ShowString(3,1,"Data2:");
	OLED_ShowHexNum(3,7,(uint32_t)arr2,8);
	while (1)
	{
		
		OLED_ShowHexNum(2,1,arr1[0],2);
		OLED_ShowHexNum(2,4,arr1[1],2);
		OLED_ShowHexNum(2,7,arr1[2],2);
		OLED_ShowHexNum(2,10,arr1[3],2);
		
		Delay_ms(1000);
		DMA_Transfer();

		
		OLED_ShowHexNum(4,1,arr2[0],2);
		OLED_ShowHexNum(4,4,arr2[1],2);
		OLED_ShowHexNum(4,7,arr2[2],2);
		OLED_ShowHexNum(4,10,arr2[3],2);
		Delay_ms(1000);
		arr1[0]++;
		arr1[1]++;
		arr1[2]++;
		arr1[3]++;
	}
}
