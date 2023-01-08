#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Implement n to the k power recursively

double power(int n, int k)
{
	if (k > 0)
		return n * power(n, k - 1);
	else if (k < 0)
		return 1.0/ (power(n, -k));
	else
		return 1.0;
}

int main()
{
	int n=0;
	int k = 0;
	printf("Enter two numbers:");
	scanf("%d%d", &n,&k);

	printf("%d to the %d power is %lf", n, k, power(n, k));

	return 0;
}