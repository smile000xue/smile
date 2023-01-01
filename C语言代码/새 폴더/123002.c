//prints the number with its digits reversed
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m,rever;
	printf("Enter a two-digit number:");
	scanf("%d",&m);
	rever = m / 10 + (m % 10) * 10;
	printf("\n");

	printf("The reversal is:%d", rever);

	return 0;
}
