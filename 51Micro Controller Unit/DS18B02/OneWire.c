#include <REGX52.H>
#include <INTRINS.H>

//引脚定义
sbit DQ=P3^7;

/**
  * @brief  单总线初始化
  * @param  无
  * @retval 从机响应位，0为响应，1为未响应
  */
unsigned char start(void)
{
	unsigned char ack=0;
	unsigned char i=0;
	DQ=1;
	DQ=0;
	i = 227;while (--i);    //Delay 500us
	DQ=1;
	i = 29;while (--i);     //Delay 70us
	ack=DQ;
	i = 181;while (--i);    //Delay 400us
	
	return ack;
}

/**
  * @brief  单总线发送一位
  * @param  Bit 要发送的位
  * @retval 无
  */
void SendBit(unsigned char Bit)
{
	unsigned char i=0;
	DQ=1;
	DQ=0;
	i= 2;while (--i);     //Delay 10us
  DQ=Bit;
	i= 25;while (--i);    //Delay 60us
	DQ=1;
}

/**
  * @brief  单总线接收一位
  * @param  无
  * @retval 读取的位
  */
unsigned char ReceiveBit(void)
{
	unsigned char i=0;
	unsigned char Bit=0;
	DQ=1;
	DQ=0;
	i = 1;while (--i);     //Delay 8us
	DQ=1;
	_nop_();               //Delay 6us
	Bit=DQ;
	i = 20;while (--i);     //Delay 50us
	
	return Bit;
}

/**
  * @brief  单总线发送一个字节
  * @param  Byte 要发送的字节
  * @retval 无
  */
void WriteByte(unsigned char Data)
{
	unsigned char i=0; 
	for(i=0;i<8;i++)
	{
		SendBit(Data&(0x01<<i));
	}
}

/**
  * @brief  单总线接收一个字节
  * @param  无
  * @retval 接收的一个字节
  */
unsigned char ReadByte(void)
{
	unsigned char Data=0;
  unsigned char i=0; 
	for(i=0;i<8;i++)
	{
		if(ReceiveBit())Data|=(0x01<<i);
	}
  return Data;	
}
	
