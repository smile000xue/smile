#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a,b,c,side;

	puts("Forming an isosceles rigth triangle with a right angle at the top left.");
	printf("Side:"); scanf("%d", &side);
	c = side;

	for (a = 1; a <= side; a++) {

		for (b = 1; b <= c; b++) {
			putchar('*');
		}
		putchar('\n');
		c--;
	}
	return 0;
}