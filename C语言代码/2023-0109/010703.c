#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Calculate the Nth Fibonacci number

int fib(int n)
{
	if (n > 2)
	{
		return fib(n - 1) + fib(n - 2);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int n;
	printf("Enter a number");
	scanf("%d", &n);

	printf("the %d Fibonacci number is %d", n,fib(n));

	return 0;
}