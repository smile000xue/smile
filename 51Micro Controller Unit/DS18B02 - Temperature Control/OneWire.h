#ifndef __OneWire_H__
#define __OneWire_H__

unsigned char DS18B02start(void);
void SendBit(unsigned char Bit);
unsigned char ReceiveBit(void);
void DS18B02WriteByte(unsigned char Data);
unsigned char DS18B02ReadByte(void);

#endif
