#include <stdio.h>

int main(void)
{
	int b;
	int a[5] = { 1,2,3,4,5, };
	int c[5];

	for (b = 0; b < 5; b++) {
		c[b] = a[4 - b];
	}
	puts("   a   b");
	puts("  -------");
	for (b = 0; b < 5; b++) {
		printf("%4d%4d\n", a[b], c[b]);
	}
	return 0;
}