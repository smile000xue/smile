#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m,a;
	printf("   |   1   2   3   4   5   6   7   8   9\n");
	printf("________________________________________\n\n");

	for (m = 1; m <= 9; m++) {
		printf("%d  |", m);
		for (a = 1; a <= 9; a++) {
			printf("%4d",a * m);
		}
		printf("\n");
	}
	return 0;
}