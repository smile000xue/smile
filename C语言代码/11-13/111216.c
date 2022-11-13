#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n;
	printf("Dispaly how many *:");
	scanf("%d", &m);

	for (n = 1; n <= m; n++) {
		if (n % 5 == 1) {
			putchar('\n');
		}
		putchar('*');
	}
	return 0;
}