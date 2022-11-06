#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c,d,max;
	puts("please enter four integers.");
	printf("integera:"); scanf("%d", &a);
	printf("integerb:"); scanf("%d", &b);
	printf("integerc:"); scanf("%d", &c);
	printf("integerd:"); scanf("%d", &d);
	
	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	printf("The maximum value is %d", max);

	return 0;
}