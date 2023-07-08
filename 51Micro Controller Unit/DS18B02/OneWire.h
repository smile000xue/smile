#ifndef __OneWire_H__
#define __OneWire_H__

unsigned char start(void);
void SendBit(unsigned char Bit);
unsigned char ReceiveBit(void);
void WriteByte(unsigned char Data);
unsigned char ReadByte(void);

#endif
