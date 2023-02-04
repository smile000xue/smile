#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//计算一个数的二进制数有多少个1

//int binary(int num)
//{
//	int add = 0;
//	int i = 0;
//	int a = 1;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (a << i))
//		{
//			add++;
//		}
//	}
//
//	return add;
//}


//负数不可用，但是函数变为unsigned int可以用
//int binary(unsigned int num)
//{
//	int add = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			add++;
//		}
//		num /= 2;
//	}   
//	return add;
//}

int binary(int num)
{
	int add = 0;
	while (num)
	{
		add++;
		num = num & (num - 1);
	}
	return add;
}

int main()
{
	int num = 0;
	printf("Please enter a number:");
	scanf("%d", &num);

	printf("%d\n",binary(num));


	return 0;
}

//判断一个数是不是2的n次方
//num&（num-1）==0