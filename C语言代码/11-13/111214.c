#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m,n;
	printf("integer value:");
	scanf("%d", &m);-

	for (n = 1; n <= m; n += 2) {
		printf("%d ", n);
	}
	printf("\n");
	return 0;
}