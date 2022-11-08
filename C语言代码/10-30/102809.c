#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main(void)
{

	int m, n;
	puts("please enter two integers.");

	printf("integerx:"); scanf("%d", &m);

	printf("integery:"); scanf("%d", &n);

	m = 100 * m;

	printf("The value of m is %d%% of n",m/n);

	return 0;
}