#ifndef __I2C_H__
#define __I2C_H__

void start(void);
void stop(void);
void Send_Byte(unsigned char Data);
unsigned char Receive_Byte(void);
void Send_ACK(unsigned char Ack);
unsigned char Receive_Ack(void);


#endif