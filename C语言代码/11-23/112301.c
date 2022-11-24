#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int min2(int a, int b)
{
	/*int min = a;
	if (b < min) min = b;
	return min;*/
	//another way
	return (a < b) ? a : b;
}
int main()
{
	int a, b;
	puts("Please enter two integers.");
	printf("Integer1:"); scanf("%d", &a);
	printf("Integer2:"); scanf("%d", &b);

	printf("The minimum value is %d", min2(a, b));

	return 0;
}