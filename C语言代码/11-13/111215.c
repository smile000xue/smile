#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	printf("The value of n:");
	scanf("%d", &n);

	for (m = 1; m <= n; m++) {
		printf("%d to the second power is %d", m, (m*m));
		printf("\n");
	}
	return 0;
}