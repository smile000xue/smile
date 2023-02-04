#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//正整数A和正整数B的最小公倍数是指能被A和B整除的最小的正整数值，
//设计个算法，求输入A和B的最小公倍数。

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);

	int c = a > b ? a : b;
	while (c % b != 0 || c % a != 0)
	{
		c++;

	}
	printf("%d", c);


	return 0;
}