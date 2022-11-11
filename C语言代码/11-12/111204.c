#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	printf("Please enter an integer:");
	scanf("%d", &m);
	n = 2;

	while (m >=n) {
		printf("%d ", n);
		n = n + 2;
	}
	printf("\n");

	return 0;
}