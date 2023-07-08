#include <REGX52.H>
#include "I2C.h"

#define AT24C02 0xA0

void AT24C02WriteByte(unsigned char Address,signed char Data)
{
	AT24C02start();
	Send_Byte(AT24C02);
	Receive_Ack();
	Send_Byte(Address);
	Receive_Ack();
	Send_Byte(Data);
	Receive_Ack();
	stop();
}

signed char AT24C02ReadByte(unsigned char Address)
{
	signed char Data=0;
	AT24C02start();
	Send_Byte(AT24C02);
	Receive_Ack();
	Send_Byte(Address);
	Receive_Ack();
	AT24C02start(); 
	Send_Byte((AT24C02|0x01));
	Receive_Ack();
	Data=Receive_Byte();
	Send_ACK(1);
	stop();
	
	return Data;
}

	
	

