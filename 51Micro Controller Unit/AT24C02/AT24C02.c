#include <REGX52.H>
#include "I2C.h"

#define AT24C02 0xA0

void WriteByte(unsigned char Address,unsigned char Data)
{
	start();
	Send_Byte(AT24C02);
	Receive_Ack();
	Send_Byte(Address);
	Receive_Ack();
	Send_Byte(Data);
	Receive_Ack();
	stop();
}

unsigned char ReadByte(unsigned char Address)
{
	unsigned char Data=0;
	start();
	Send_Byte(AT24C02);
	Receive_Ack();
	Send_Byte(Address);
	Receive_Ack();
	start(); 
	Send_Byte((AT24C02|0x01));
	Receive_Ack();
	Data=Receive_Byte();
	Send_ACK(1);
	stop();
	
	return Data;
}

	
	

