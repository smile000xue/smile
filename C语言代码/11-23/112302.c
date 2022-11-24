#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min3(int a, int b, int c) 
{
	//int min = a;
	//if (min > b) min = b;
	//if (min > c) min = c;
	//return min;
	//另外一种方法
	int min = a;
	min = (min > b) ? b : min;
	min = (min > c) ? c : min;
	return min;
}
int main()
{
	int a, b, c;

	puts("Please enter three integers.");
	printf("Integer1:"); scanf("%d", &a);
	printf("Integer2:"); scanf("%d", &b);
	printf("Integer3:"); scanf("%d", &c);

	printf("The minimum value is %d.", min3(a, b, c));

	return 0;
}