#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, d,min;
	puts("please enter three integers.");
	printf("integera:"); scanf("%d", &a);
	printf("integerb:"); scanf("%d", &b);
	printf("integerc:"); scanf("%d", &c);

	d = (a < b) ? a : b;
	min = (d < c) ? d : c;
	printf("The minimum value is %d", min);

	return 0;
}