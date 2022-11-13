#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b,c, side;

	puts("Forming an isosceles right triangle with right angles at the top right.");
	printf("Side");
	scanf("%d", &side);
	c = side;

	for (a = 1; a <= side; a++) {
		for (b = 1; b < a; b++) {
			putchar(' ');
		}
		for (b = 1; b <= c; b++) {
			putchar('*');
		}
		c--;
		putchar('\n');
	}
	return 0;
}