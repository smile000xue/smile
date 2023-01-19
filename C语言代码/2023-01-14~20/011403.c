#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a[] = {1,2,3,4,5};
	int b[] = {6,7,8,9,10};

	int sz = sizeof(a) / sizeof(a[0]);

	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;

	}
	for (i = 0; i < sz;i++)
	{
		printf("a[%d]=%d  ",i, a[i]);
		printf("b[%d]=%d\n", i, b[i]);

	}

	return 0;
}