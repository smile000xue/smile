#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"
#include "MatrixKey.h"

void main()
{
	unsigned int number=0;
	unsigned int password =0;
	unsigned int count=1;
	LCD_Init();
	LCD_ShowString(1,1,"Password:");
	while(1)
	{
		number=MatrixKey();
		if(number)
		{
			if(number<=10)
			{
				if(count<4)
				{
					password*=10;              //密码向左移一位
					password+=number%10;       //存入密码  
					count++;
				}
				LCD_ShowNum(2,1,password,4);
			}
			
		}
		
//		number=MatrixKey();
//		if(number)
//		{
//			if(number<=10)
//			{
//				password=number%10;	
//				while(count<=4&&number!=0)
//				{
//				LCD_ShowNum(2,count,password,1);
//				count++;
//				number=0;
//				}
//			}
//		}
		
		
		if(number==11)
		{
			if(password==1234)
			{
				LCD_ShowString(1,14,"OK ");
				password=0;
				count=0;
				LCD_ShowNum(2,1,password,4);
			}
			else
			{
				LCD_ShowString(1,14,"ERR");
				password=0;
				count=0;
				LCD_ShowNum(2,1,password,4);
			}
		}
		if(number==12)
		{
			password=0;
			count=0;
			LCD_ShowNum(2,1,password,4);
		}	
	}	
}