#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B;

	puts("please enter two integers.");
	printf("integerA:"); scanf("%d", &A);
	printf("integerB:"); scanf("%d", &B);
	
	if (A%B)
		puts("B is not a divisor of A.");
	else
		puts("B is a divisor of A.");
	return 0;
}