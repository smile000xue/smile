#ifndef __DS1302_H__
#define __DS1302_H__

void DS1302_Init(void);
void DS1302_Write(unsigned char Command,unsigned char Data);
unsigned char DS1302_Read(unsigned char Command);
void Set_time(void);
void Read_time(void);
extern unsigned char time[];

#endif