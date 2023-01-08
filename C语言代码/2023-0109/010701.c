#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Calculates the sum of the bits of a number (recursively)

int DigitSum(int m)
{
	int sum = 0;
	if (m > 9)
	{
		sum=DigitSum(m / 10);
	}
	return sum+=m % 10;

}

int main()
{
	int m;
	printf("Enter a number:");
	scanf("%d", &m);

	printf("the sum of the bits of %d is %d",m, DigitSum(m));

	return 0;
}