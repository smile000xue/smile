#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	printf("Integer value:");
	scanf("%d", &m);
	int sum = 0;

	for (n = 1; n <= m; n++) {
		if (m % n == 0) {
			printf("%d\n", n);
			sum += 1;
		}
	}
	printf("There are %d divisor numbers.", sum);
	return 0;
}