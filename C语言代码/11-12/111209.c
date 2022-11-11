#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m;

	do {
		printf("Please enter an positive integer:");
		scanf("%d", &m);
		if (m <= 0) {
			printf("Please do not enter an non-positive integer.");
		}
	} while (m <= 0);

	printf("%dshows up in reverse and it is",m);
	while (m > 0) {
		printf("%d", m % 10);
		m /= 10;
	}
	puts(".");

	return 0;
}