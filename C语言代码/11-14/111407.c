#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c, level;

	puts("Let's draw a downward pyramid.");
	printf("The pyramid has several levels:"); scanf("%d", &level);

	for (a = 1; a <= level; a++) {
		for (b = 1; b < a; b++) {
			printf(" ");
		}
		for (c = 1; c <= (level - a) * 2 + 1; c++) {
			printf("%d", a % 10);
		}
		printf("\n");
	}
	return 0;
}