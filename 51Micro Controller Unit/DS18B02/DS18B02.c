#include "OneWire.h"

/**
  * @brief  DS18B20开始温度变换
  * @param  无
  * @retval 无
  */
void TempConvert(void)
{
	start();
	WriteByte(0xCC);
	WriteByte(0x44);
}

/**
  * @brief  DS18B20读取温度
  * @param  无
  * @retval 温度数值
  */
float TempRead(void)
{
	int temp=0;
	unsigned char LSB,MSB=0; 
	float T=0;
	start();
	WriteByte(0xCC);
	WriteByte(0xBE);
	LSB=ReadByte();
	MSB=ReadByte();
	temp=(MSB<<8)|LSB;
	T=temp/16.0;
	
	return T;
}