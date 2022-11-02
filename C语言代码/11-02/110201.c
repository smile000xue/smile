#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(stdio)

{
	int m;
	printf("please enter a number:");
	scanf("%d",&m);
	if (m == 0)
		printf("The number is 0.");
	else if (m > 0)
		printf("The number is a positive number.");
	else if (m < 0)
		printf("The number is a negative number.");

	return 0;
}