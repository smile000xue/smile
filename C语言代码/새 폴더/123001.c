//Converts a Celsius temperature to Fahrenheit
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float m, n;
	printf("Enter Celsius temperature:");
	scanf("%f", &m);
	n= m * 1.8 + 32;
	printf("\n\n");
	printf("Fahrenheit equivalent:%.1f\n",n);

	return 0;
}	