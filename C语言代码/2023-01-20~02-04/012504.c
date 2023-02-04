#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指针的类型

int main()
{
	int arr[] = { 1,2,3,4,5 };
	char *p = arr;

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		*(p + i) = 0;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}