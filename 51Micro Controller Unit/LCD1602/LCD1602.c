#include <REGX52.H>
#include "Delay.h"

//引脚定义
sbit LCD_RS=P2^6;
sbit LCD_WR=P2^5;
sbit LCD_EN=P2^7;

sfr Data_Port=0x80;

/**
  * @brief  LCD1602写命令
  * @param  Command 要写入的命令
  * @retval 无
  */
void LCD_WriteCommand(unsigned char Command)
{
	LCD_RS=0;
	LCD_WR=0;
	Data_Port=Command;
	LCD_EN=1;
	Delay(1);
	LCD_EN=0;
	Delay(1);
}

/**
  * @brief  LCD1602写数据
  * @param  Data 要写入的数据
  * @retval 无
  */
void LCD_WriteData(unsigned char Data)
{
	LCD_RS=1;
	LCD_WR=0;
	Data_Port=Data;
	LCD_EN=1;
	Delay(1);
	LCD_EN=0;
	Delay(1);
}


/**
  * @brief  LCD1602初始化函数
  * @param  无
  * @retval 无
  */
void LCD_Init(void)
{
	LCD_WriteCommand(0x38);
	LCD_WriteCommand(0x0C);
	LCD_WriteCommand(0x06);
	LCD_WriteCommand(0x01);
}

/**
  * @brief  LCD1602设置光标位置
  * @param  Line 行位置，范围：1~2
  * @param  Column 列位置，范围：1~16
  * @retval 无
  */
void LCD_SetCursor(unsigned char Line,unsigned char Column)
{
	if(Line==1)
	{
		LCD_WriteCommand(0x80|(Column-1));
	}
	else 
	{
		LCD_WriteCommand(0x80|(Column-1+0x40));
	}
}

/**
  * @brief  在LCD1602指定位置上显示一个字符
  * @param  Line 行位置，范围：1~2
  * @param  Column 列位置，范围：1~16
  * @param  Char 要显示的字符
  * @retval 无
  */
void LCD_ShowChar(unsigned char Line,unsigned char Column,unsigned char Char)
{
	LCD_SetCursor(Line,Column);
	LCD_WriteData(Char);
}

/**
  * @brief  在LCD1602指定位置开始显示所给字符串
  * @param  Line 起始行位置，范围：1~2
  * @param  Column 起始列位置，范围：1~16
  * @param  String 要显示的字符串
  * @retval 无
  */
void LCD_ShowString(unsigned char Line,unsigned char Column,unsigned char String[])
{
	unsigned char i=0;
	while(String[i])
	{
		LCD_ShowChar(Line,Column++,String[i++]);
	}
}

/**
  * @brief  返回值=X的Y次方
  */
unsigned int LCD_power(unsigned char a,unsigned char b)
{
	unsigned int Result=1;
	
	while(b--)
	{
		Result*=a;
	}
	return Result;
	
}

/**
  * @brief  在LCD1602指定位置开始显示所给数字
  * @param  Line 起始行位置，范围：1~2
  * @param  Column 起始列位置，范围：1~16
  * @param  Number 要显示的数字，范围：0~65535
  * @param  Length 要显示数字的长度，范围：1~5
  * @retval 无
  */
void LCD_ShowNum(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length)
{
	while(Length--)
	{
		LCD_ShowChar(Line,Column++,(Number/LCD_power(10,Length))%10+0x30);
	}
}

/**
  * @brief  在LCD1602指定位置开始以有符号十进制显示所给数字
  * @param  Line 起始行位置，范围：1~2
  * @param  Column 起始列位置，范围：1~16
  * @param  Number 要显示的数字，范围：-32768~32767
  * @param  Length 要显示数字的长度，范围：1~5
  * @retval 无
  */
void LCD_ShowSignedNum(unsigned char Line,unsigned char Column,signed int Number,unsigned char Length)
{
	unsigned int Number1=0;
	
	if(Number>=0)
	{
		Number1=Number;
		LCD_ShowChar(Line,Column++,'+');
	}
	else
	{
		Number1=-Number;
		LCD_ShowChar(Line,Column++,'-');
	}
	while(Length--)
	{
		LCD_ShowChar(Line,Column++,(Number1/LCD_power(10,Length))%10+0x30);
	}
}	

/**
  * @brief  在LCD1602指定位置开始以十六进制显示所给数字
  * @param  Line 起始行位置，范围：1~2
  * @param  Column 起始列位置，范围：1~16
  * @param  Number 要显示的数字，范围：0~0xFFFF
  * @param  Length 要显示数字的长度，范围：1~4
  * @retval 无
  */
void LCD_ShowHexNum(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length)
{
	unsigned char i=0;
		
	while(Length--)
	{
		i=Number/LCD_power(16,Length)%16;
	  if(i<10)
		LCD_ShowChar(Line,Column++,i+0x30);
		else 
		LCD_ShowChar(Line,Column++,i+0x41-10);
	}
}
/**
  * @brief  在LCD1602指定位置开始以二进制显示所给数字
  * @param  Line 起始行位置，范围：1~2
  * @param  Column 起始列位置，范围：1~16
  * @param  Number 要显示的数字，范围：0~1111 1111 1111 1111
  * @param  Length 要显示数字的长度，范围：1~16
  * @retval 无
  */
void LCD_ShowBinNum(unsigned char Line,unsigned char Column,unsigned int Number,unsigned char Length)
{
	while(Length--)
	{
		LCD_ShowChar(Line,Column++,(Number/LCD_power(2,Length))%2+0x30);
	}
}

unsigned char array[8][8]={{0x10,0x06,0x09,0x08,0x08,0x09,0x06,0x00}, //字符℃
                           {0x00,0x00,0x00,0x1F,0x00,0x00,0x00,0x00}, //字符一
					                 {0x00,0x0E,0x00,0x00,0x00,0x1F,0x00,0x00}, //字符二
					                 {0x0E,0x00,0x00,0x0E,0x00,0x00,0x1F,0x00},//字符三
					                 {0x1F,0x11,0x15,0x15,0x1F,0x11,0x1F,0x00},//字符四
					                 {0x08,0x1F,0x12,0x0F,0x0A,0x1F,0x02,0x00},//字符年
					                 {0x0F,0x09,0x0F,0x09,0x0F,0x09,0x13,0x00},//字符月
                           {0x1F,0x11,0x11,0x1F,0x11,0x11,0x1F,0x00}};//字符日


/**
  * @brief  在LCD1602的CGRAM的0x00~0x07地址处写入自定义符号
  * @param  add CGRAM的地址0x00~0x07
  * @param  *array 要写入自定义符号的数据，5行8列
  * @retval 无
  */													 
void LCD_WriteCGRAM(unsigned char add,unsigned char*array)
{
	unsigned char i=0;
	add=add<<3;
	for(i=0;i<8;i++)
	{
		LCD_WriteCommand(0x40|add+i);
		LCD_WriteData(*array++);
	}
}

/**
  * @brief  显示LCD1602CGRAM在0x00~0x07地址的自定义符号
  * @param  Line 起始行位置，范围：1~2
  * @param  Column 起始列位置，范围：1~16
  * @param  add CGRAM的地址0x00~0x07 
  * @retval 无
  */	
void LCD_ShowCGRAM(unsigned char Line,unsigned char Column,unsigned char add)
{
	unsigned char i=0;
	for(i=0;i<8;i++)
	{
		LCD_WriteCGRAM(i,array[i]);
	}
	
	LCD_ShowChar(Line,Column,add);
}

