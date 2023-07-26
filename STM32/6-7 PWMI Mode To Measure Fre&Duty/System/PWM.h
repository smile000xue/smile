#ifndef __PWM_H__
#define __PWM_H__

void PWM_Init(void);
void PWMTIM_SetCompare1(uint16_t Number);
void PWMTIM_PrescalerConfig(uint16_t Number);

#endif
