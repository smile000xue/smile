#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float Cel = 0;

	printf("Enter Celsius temperature:");
	scanf("%f", &Cel); 
	printf("Fahrenheit equivalent :%.1f\n",Cel*1.8+32);

	return 0;
}

//int main()
//{
//	float Cel = 0;
//	float Fah = 0;
//
//	printf("Enter Seoul temperature (Celsius):");
//	scanf("%f", &Cel);
//	printf("Enter New York temperature(Celsius) :");
//	scanf("%f", &Fah);
//	
//	printf("Difference (Seoul ¨C New York) in Fahrenheit: %.1f\n", (Cel *1.8+32)- (Fah * 1.8 + 32));
//
//	return 0;
//}