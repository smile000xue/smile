#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	puts("please enter two integers.");
	printf("integerm:"); scanf("%d", &m);
	printf("integern:"); scanf("%d", &n);
	if (m == n)
		printf("m is equal to n");
	else if (m > n)
		printf("m is greater than n");
	else
		printf("m is less than n");

	return 0;
}