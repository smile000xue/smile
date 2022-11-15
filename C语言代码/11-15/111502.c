#include <stdio.h>

int main(void)
{
	int b;
	int a[5];

	for (b = 0; b < 5; b++) {
		a[b] = 5 - b;
	}
	for (b = 0; b < 5; b++) {
		printf("a[%d]=%d\n", b, a[b]);
	}
	return 0;
}