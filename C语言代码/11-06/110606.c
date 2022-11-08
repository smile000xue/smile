#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a, b; int sum = 0;
	puts("please enter two integers.");
	printf("integera:"); scanf("%d", &a);
	printf("integerb:"); scanf("%d", &b);

	if (a >=b) {
		int c = b;
		do {
			sum = sum + c;
			c = c + 1;
		} while (c <= a);
		printf("The sum of all integers greater than or equal to %d and less than or equal to %d is %d.", b, a, sum);
	}
	else{
		int d = a;
		do {
			sum = sum + d;
			d = d + 1;
		} while (d <= b);
		printf("The sum of all integers greater than or equal to %d and less than or equal to %d is %d.", a, b, sum);
	}

	return 0;
}