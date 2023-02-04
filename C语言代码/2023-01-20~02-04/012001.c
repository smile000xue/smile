#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//实用调试技巧

void add2(int x, int y)
{
	int c = x + y;
}

void add1(int x, int y)
{
	add2(x, y);
}

void add(int x, int y)
{
	add1(x, y);
}

int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i <10; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	int a = 0;
	int b = 9;
	add(a, b);

	return 0;
}