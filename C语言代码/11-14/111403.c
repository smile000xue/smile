#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n, a, b;
	puts("Let's draw a rectangle");
	printf("Side:"); scanf("%d", &m);
	printf("The other side:"); scanf("%d", &n);

	if (m >= n) {
		for (a = 1; a <= n; a++) {
			for (b = 1; b <= m; b++) {
				putchar('*');
			}
			putchar('\n');
		}
	}
	else
		for (a = 1; a <= m; a++) {
			for (b = 1; b <= n; b++) {
				putchar('*');
			}
			putchar('\n');
		}
	return 0;
}