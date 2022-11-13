#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n,a;
	puts("Generate a square");
	printf("How many layers are there in a square:");
	scanf("%d", &m);
	
	for (n = 1; n <= m; n++) {
		for (a = 1; a <= m;a++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}