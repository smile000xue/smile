#include <REGX52.H>
#include "LCD1602.h"
#include "DS1302.h"
#include "Key.h"
#include "Timer0.h"

unsigned char KeyNumber,MODE,Select,flag;

void TimeShow(void)
{
	Read_time();	
	LCD_ShowNum(1,1,20,2);
	LCD_ShowNum(1,3,time[0],2);
	LCD_ShowNum(1,6,time[1],2);
	LCD_ShowNum(1,9,time[2],2);
	LCD_ShowNum(2,1,time[3],2);
	LCD_ShowNum(2,4,time[4],2);
	LCD_ShowNum(2,7,time[5],2);
}

void TimeSet(void)
{
	if(KeyNumber==2)
	{
		Select++;
		Select%=6;
	}
	if(KeyNumber==3)
	{
		time[Select]++;
		if(time[0]>99){time[0]=0;}
		if(time[1]>12){time[1]=1;}
		if(time[1]==1||time[1]==3||time[1]==5||time[1]==7||time[1]==8||time[1]==10||time[1]==12)
		{
			if(time[2]>31){time[2]=1;}
		}
		if(time[1]==4||time[1]==6||time[1]==9||time[1]==11)
		{
			if(time[2]>30){time[2]=1;}
		}
		if(time[1]==2)
		{
			if((time[0]%4==0&&time[0]%100!=0)||time[0]%400==0)
			{if(time[2]>28){time[2]=1;}}
			else
			{if(time[2]>29){time[2]=1;}}
		}
		
		if(time[3]>23){time[3]=0;}
		if(time[4]>59){time[4]=0;}
		if(time[5]>59){time[5]=0;}
	}
	if(KeyNumber==4)
	{
		time[Select]--;
		if(time[0]>100){time[0]=99;}
		if(time[1]<1){time[1]=12;}
		if(time[1]==1||time[1]==3||time[1]==5||time[1]==7||time[1]==8||time[1]==10||time[1]==12)
		{
			if(time[2]<1){time[2]=31;}
		}
		if(time[1]==4||time[1]==6||time[1]==9||time[1]==11)
		{
			if(time[2]<1){time[2]=30;}
			if(time[2]>30){time[2]=1;}
		}
		if(time[1]==2)
		{
			if((time[0]%4==0&&time[0]%100!=0)||time[0]%400==0)
			{if(time[2]<1){time[2]=28;}
			 if(time[2]>28){time[2]=1;}}
			else
			{if(time[2]<1){time[2]=29;}
			 if(time[2]>29){time[2]=1;}}
		}
		
		if(time[3]>24){time[3]=23;}
		if(time[4]>60){time[4]=59;}
		if(time[5]>60){time[5]=59;}
	}
	if(flag)
	{
		switch(Select)
		{
			case 0: LCD_ShowString(1,3,"  ");break;
			case 1: LCD_ShowString(1,6,"  ");break;
			case 2: LCD_ShowString(1,9,"  ");break;
			case 3: LCD_ShowString(2,1,"  ");break;
			case 4: LCD_ShowString(2,4,"  ");break;
			case 5: LCD_ShowString(2,7,"  ");break;
		}
	}
	else
	{
		LCD_ShowNum(1,1,20,2);
		LCD_ShowNum(1,3,time[0],2);
	  LCD_ShowNum(1,6,time[1],2);
		LCD_ShowNum(1,9,time[2],2);
		LCD_ShowNum(2,1,time[3],2);
		LCD_ShowNum(2,4,time[4],2);
		LCD_ShowNum(2,7,time[5],2);
		
	 }	
	
}

void main(void)
{
	LCD_Init();
	DS1302_Init();
	Timer0Init();
	
	LCD_ShowString(1,3,"  -  -  ");//静态字符初始化显示
	LCD_ShowString(2,1,"  :  :  ");

	Set_time();
	
	while(1)
	{
		KeyNumber=Key();
		
		if(KeyNumber==1)
		{
			if(MODE==0){MODE=1;Select=0;}
			else if(MODE==1){MODE=0;Set_time();}
		}
		switch(MODE)
		{
			case 0: TimeShow();break;
			case 1: TimeSet();break;
		}
	}
}

void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count++;
	if(T0Count>=500)
	{
		T0Count=0;
		flag=!flag;
	}
}
