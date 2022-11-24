#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sqr(int x)
{
	return x * x;
}
int pow4(int x)
{
	return sqr(x) * sqr(x);
}
int main()
{
	int a;
	printf("Please enter an integer:");
	scanf("%d", &a);
	printf("The fourth power of %d is %d.",a, pow4(a));
	return 0;
}