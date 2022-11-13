#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	do {
		printf("Please enter an positive integer:");
		scanf("%d", &m);
		if (m <= 0)
			printf("Please do not enter an non-positive integer!\n");
	} while (m <= 0);
	int i;
	n = 1;

	for (i = 1; i <= m; i++)
		if (n < 10)
			printf("%d", n++);
		else {
			n -= 10;
			printf("%d", n++);
		}
	printf("\n");
	return 0;
}