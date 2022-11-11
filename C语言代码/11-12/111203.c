#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n,w;
	printf("Please enter an positive integer:");
	scanf("%d", &n);
	m = 1; w = n;

	while (m <= n)
		printf("%d ", m++);
	if (w >= 0)
		printf("\n");

	return 0;
}
