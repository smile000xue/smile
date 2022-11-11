#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m,n,b;
	do {
		printf("Please enter an positive integer:");
		scanf("%d", &m);
		if (m <= 0) {
			printf("Please do not enter an non-positive integer!\n");
		}
	} while (m <= 0);
	n = 0; b = m;
	while (m > 0) {
		m /= 10;
		n++;
	}
	printf("The number of digitis in %d is %d.", b, n);
	return 0;
}