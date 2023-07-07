#include <REGX52.H>

 //引脚定义
sbit SLCK=P3^6;
sbit IO=P3^4;
sbit CE=P3^5;


/**
  * @brief  DS1302初始化
  * @param  无
  * @retval 无
  */
void DS1302_Init(void)
{
	SLCK=0;
	CE=0;
}

//寄存器写入地址定义

#define WP 0x8E
#define YEAR 0x8C
#define DAY 0x8A
#define MONTH 0x88
#define DATA 0x86
#define HOUR 0x84
#define MINUTES 0x82
#define SECONDS 0x80

//时间数组，索引0~6分别为年、月、日、时、分、秒、星期
unsigned char time[]={23,5,9,23,12,27,56};

/**
  * @brief  DS1302写一个字节
  * @param  Command 命令字/地址
  * @param  Data1 要写入的数据
  * @retval 无
  */
void DS1302_Write(unsigned char Command,unsigned char Data1)
{
	unsigned char i=0;
	CE=1;
	for(i=0;i<8;i++)
	{
		IO=Command&(0x01<<i);
		SLCK=1;
		SLCK=0;
	}
	for(i=0;i<8;i++)
	{
		IO =Data1&(0x01<<i);
		SLCK=1;
		SLCK=0;
	}
	CE=0;
	IO=0;
}

/**
  * @brief  DS1302读一个字节
  * @param  Command 命令字/地址
  * @retval 读出的数据
  */
unsigned char DS1302_Read(unsigned char Command)
{
	unsigned char i=0;
	unsigned char Data2=0;
	CE=1;
	Command|=0x01;
	for(i=0;i<8;i++)
	{
		IO=Command&(0x01<<i);
		SLCK=0;
		SLCK=1;
	}
	
	for(i=0;i<8;i++)
	{
		SLCK=1;
		SLCK=0;
		
		if(IO){Data2|=(0x01<<i);}
	}
	CE=0;
	IO=0;
	return Data2;
}

/**
  * @brief  DS1302设置时间，调用之后，time数组的数字会被设置到DS1302中
  * @param  无
  * @retval 无
  */
void Set_time(void)
{
	DS1302_Write(WP,0x00);
	DS1302_Write(YEAR,time[0]/10*16+time[0]%10);
	DS1302_Write(DAY,time[1]/10*16+time[1]%10);
	DS1302_Write(MONTH,time[2]/10*16+time[2]%10);
	DS1302_Write(DATA,time[3]/10*16+time[3]%10);
	DS1302_Write(HOUR,time[4]/10*16+time[4]%10);
	DS1302_Write(MINUTES,time[5]/10*16+time[5]%10);
	DS1302_Write(SECONDS,time[6]/10*16+time[6]%10);
	DS1302_Write(WP,0x80);
}

/**
  * @brief  DS1302读取时间，调用之后，DS1302中的数据会被读取到time数组中
  * @param  无
  * @retval 无
  */
void Read_time(void)
{
	unsigned char Tem=0;
	Tem=DS1302_Read(YEAR);
	time[0]=Tem/16*10+Tem%16;
	Tem=DS1302_Read(DAY);
	time[1]=Tem/16*10+Tem%16;
	Tem=DS1302_Read(MONTH);
	time[2]=Tem/16*10+Tem%16;
	Tem=DS1302_Read(DATA);
	time[3]=Tem/16*10+Tem%16;
	Tem=DS1302_Read(HOUR);
	time[4]=Tem/16*10+Tem%16;
	Tem=DS1302_Read(MINUTES);
	time[5]=Tem/16*10+Tem%16;
	Tem=DS1302_Read(SECONDS);
	time[6]=Tem/16*10+Tem%16;
}