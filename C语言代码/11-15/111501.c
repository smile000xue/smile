#include <stdio.h>

int main(void)
{
	int a[5];
	int b;

	for (b = 0; b < 5; b++) {
		a[b] = b;
	}
	for (b = 0; b < 5; b++) {
		printf("a[%d]=%d\n", b, a[b]);
	}
	return 0;
}