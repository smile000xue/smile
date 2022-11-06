#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	puts("please enter two integers");
	printf("integera:"); scanf("%d", &a);
	printf("integerb:"); scanf("%d", &b);
	
	c = a - b;
	if (c >= -10 && c <= 10)
		printf("Their difference is less than or equal to 10");
	else
		printf("their difference is greater than or equal to 11");

	return 0;
}