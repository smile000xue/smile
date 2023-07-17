#ifndef __TIMER0_H__
#define __TIMER0_H__

void Timer0Init(void);
void TimeClear(void);
unsigned int TimeGet(void);
void TimeRun(unsigned char TimeFlag);


#endif
