#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	printf("Enter two integers: ");
//	scanf("%d %d", &num1, &num2);
//	if (num1 == 0)
//	{
//		tmp = num2;
//	}
//	if (num2 == 0)
//	{
//		tmp = num1;
//	}
//	else 
//	{
//		tmp = num1 > num2 ? num2 : num1;
//		while (num1 % tmp != 0 || num2 % tmp != 0)
//		{
//			tmp--;
//		}
//	}
//	printf("Greatest common divisor :%d", tmp);
//	
//
//	return 0;
//}


int main()
{
	int numerator = 0;
	int denominator = 0;
	int tmp = 0;
	printf("Enter a fraction:");
	scanf("%d/%d", &numerator, &denominator);
	if (numerator == 0)
	{
		printf("In lowest terms:0");
	}
	else if (denominator == 0)
	{
		printf("In lowest terms:None");
	}
	else
	{
		tmp = numerator > denominator ? denominator : numerator;
		while (numerator % tmp != 0 || denominator % tmp != 0)
		{
			tmp--;
		}
		printf("In lowest terms:%d/%d", numerator / tmp, denominator / tmp);
	}
	

	return 0;
}


//int main()
//{
//	int n = 0;
//	int m = 2;
//	printf("Enter a number:");
//	scanf("%d", &n);
//	printf("\n");
//	printf("Even squares:\n\n");
//	while (m * m <= n)
//	{
//		printf(" %-4d\n", m * m);
//		m += 2;
//
//	}
//
//	return 0;
//}