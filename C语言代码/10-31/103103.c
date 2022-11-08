#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	puts("please enter two integers.");
	printf("integerm:"); scanf("%d",& m);
	printf("integern;"); scanf("%d", &n);

	printf("m is %f%% of n", (double)100*m / n);

	return 0;
}