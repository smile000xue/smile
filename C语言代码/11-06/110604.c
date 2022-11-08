#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int retry;
	do {
		int m;
		printf("please enter an integer:");
		scanf("%d", &m);

		if (m == 0)
			printf("The number is 0.\n");
		else if (m > 0)
			printf("The integer is positive.\n");
		else
			printf("The integer is negative.\n");
		printf("Do you want to continue,yes...0/no...9:");
		scanf("%d", &retry);

	} while (retry == 0);

	return 0;
}