#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main (void)

{
	int x=0, y=0, z=0;
	
	puts("请输入三个整数：");

	printf("整数1:%d,\n",x); scanf("%d", &x);

	printf("整数2:%d,\n",y); scanf("%d", &y);

	printf("整数3:%d,\n",z); scanf("%d", &z);

	printf("该三个整数的和是%d,\n", x + y + z);

	return 0;


}
