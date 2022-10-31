#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int m;
	printf("please enter your height;");
	scanf("%d", &m);


	printf("Your standard weight is %.1f kg\n", (double)(m - 100) * 0.9);



	return 0;
}