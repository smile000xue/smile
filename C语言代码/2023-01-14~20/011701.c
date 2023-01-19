#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr1[10] = { 0 };
	int* p1 = arr1;
	char* p2 = arr1;
	short* p3 = arr1;

	printf("p1:%d\n", sizeof(p1));
	printf("p3:%d\n", sizeof(p2));
	printf("p3:%d\n",sizeof(p3));

	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p1 + 1;
		p2 + 1;
		p3 + 1;
	}

	int* p9 = &arr1[0];
	int* p8 = &arr1[9];

	printf("%d", p8 - p9);

	return 0;
}