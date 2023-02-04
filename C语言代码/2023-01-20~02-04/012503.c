#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
	
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

int main()
{
	int num = 0;
	scanf("%d", &num);

	int i = 0;
	int even = 0;
	int odd = 0;
	printf("EVEN:\n");
	for (i = 31; i >= 0; i-=2)
	{
		printf("%d ",((num >> i) & 1));
	}
	printf("\n");
	printf("ODD:\n");
	for (i = 30; i >= 0; i -=2)
	{
		printf("%d ", ((num >> i) & 1));
	}


	return 0;
}