#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sump(int a)
{
	int sum = 0;
	while (a-- >= 0) {
		sum += a+1;
	}
	return sum;
}
int main(void)
{
	int a;
	printf("Please enter an integer:"); scanf("%d", &a);
	printf("The sum from 1 to %d is %d.", a, sump(a));
	return 0;
}