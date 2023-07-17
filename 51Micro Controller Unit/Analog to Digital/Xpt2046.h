#ifndef __XPT2046_H__
#define __XPT2046_H__

#define Xpt2046_XP			0x9C
#define Xpt2046_YP			0xDC
#define Xpt2046_VBAT  	0xAC
#define Xpt2046_AUX  	  0xEC

unsigned int Xpt2046_ReadAD(unsigned char Command);

#endif
