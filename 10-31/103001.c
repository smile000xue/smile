#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{
	int a,b;
	
	puts("please enter two integers.");
	printf("integera:"); scanf("%d", &a);
	printf("integerb:"); scanf("%d", &b);

	printf("The sum of them is %d,product is %d.", a + b, a * b);



	return 0;
}