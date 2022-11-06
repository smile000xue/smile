#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	puts("please enter two integers.");
	printf("integera:"); scanf("%d", &a);
	printf("integerb:"); scanf("%d", &b);
	
	if (a >= b)
		printf("Their difference is %d", a - b);
	else
		printf("Their difference is %d", b - a);
	return 0;
}