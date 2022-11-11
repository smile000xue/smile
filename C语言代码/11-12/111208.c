#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m;
	printf("positive integer:");
	scanf("%d", &m);

	while (m > 0) {
		putchar('*');
		putchar('\n');
		m--;
	}
	return 0;
}