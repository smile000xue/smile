#include <REGX52.H>

sbit SCL=P2^1;
sbit SDA=P2^0;

void AT24C02start(void)
{
	SCL=1;
	SDA=1;
	SDA=0;
	SCL=0;
}

void stop(void)
{
	SDA=0;
	SCL=1;
	SDA=1;
}

void Send_Byte(unsigned char Data)
{
	unsigned char i=0;
	for(i=0;i<8;i++)
	{
		SDA=(Data&(0x80>>i));
		SCL=1;
		SCL=0;
	}
}

unsigned char Receive_Byte(void)
{
	unsigned char i,Data=0;
	SDA=1;
	for(i=0;i<8;i++)
	{
		SCL=1;
		if(SDA) Data|=(0x80>>i);
		SCL=0;
	}
	return Data;
}

void Send_ACK(unsigned char Ack)
{
		SDA=Ack;
	  SCL=1;
		SCL=0;
		
}
unsigned char Receive_Ack(void)
{
	unsigned char Ack=0;
	SDA=1;
	SCL=1;
	Ack=SDA;
	SCL=0;
	
	return Ack;
}