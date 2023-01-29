#include "LCD1602.h"
#include "Delay.h"	

#define INITI 1

void main()
{
	int seconds=30;
	int minunte=48;
	int hour=19;
	int day=28;
	int month=1;
	int year=2023;
	LCD_Init();
//	LCD_ShowChar(1,1,'A');
//	LCD_ShowString(1,4,"TXL 520 ZYJ");
//	LCD_ShowString(2,8,"LOVE");
//	LCD_ShowString(2,5,"520 1314");
//	LCD_ShowString(1,1,"You are");
//	LCD_ShowNum(1,9,250,3);
//	LCD_ShowSignedNum(2,1,-250,5);
//	LCD_ShowChar(1,12,'!');
//	LCD_ShowHexNum(1,1,0x2,2);
//	LCD_ShowBinNum(2,1,0x3,3);
	
	
	
	
	
	while(1)
	{
		LCD_ShowNum(1,INITI,year,4);
		LCD_ShowChar(1,INITI+4,'-');
		LCD_ShowNum(1,INITI+5,month,2);
		LCD_ShowChar(1,INITI+7,'-');
		LCD_ShowNum(1,INITI+8,day,2);
		LCD_ShowNum(1,INITI+11,hour,2);
		LCD_ShowChar(1,INITI+13,':');
		LCD_ShowNum(1,INITI+14,minunte,2);
		LCD_ShowNum(2,9,seconds,2);
		
		Delay(1000);
		seconds++;
		
		if(seconds>=60)
		{	
			seconds=0;
			minunte+=1;
		}
		if(minunte>=60)
		{	
			minunte=0;
			hour+=1;
		}
		if(hour>=24)
		{	
			hour=0;
			day+=1;
		}
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12: 
				if(day>31)
				{	
					day=1;
					month+=1;
				}
			case 2:
				if(year%4==0&&year%4!=0||year%400==0)
					{
						if(day>28)
						{	
						day=1;
						month+=1;
						}
					}
				else
				{
					if(day>29)
						{	
						day=1;
						month+=1;
						}
				}	
			case 4:
			case 6:
			case 9:
			case 11:
				if(day>30)
				{	
					day=1;
					month+=1;
				}
		if(month>12)
		{	
			month=1;
			year+=1;
		}	
		}
	}
}
	