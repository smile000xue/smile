#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b,c,level;
	puts("Let's draw a pyramid.");
	printf("The pyramid has several levels."); scanf("%d", &level);

	for (a = 1; a <= level; a++) {
		for (b = 1; b <= level - a; b++) {
			putchar(' ');
		}
		for (c = 1; c <= (a - 1) * 2 + 1; c++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}