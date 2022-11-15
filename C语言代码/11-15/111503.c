#include <stdio.h>

int main(void)
{
	int a[5] = { 5,4,3,2,1, };
	int b;

	for (b = 0; b < 5; b++) {
		printf("a[%d]=%d\n", b, a[b]);
	}
	return 0;
}