#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n,m;
	int sum = 0;
	printf("The value of n;");
	scanf("%d",&n);
	
	for (m = 1; m <= n; m++)
		sum += m;
	printf("The sum of 1 to %d is %d", n, sum);

	return 0;
}