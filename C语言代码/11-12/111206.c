#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m,n;
	printf("positive integer:");
	scanf("%d", &m);
	n = m;

	while (m-- >0)
		putchar('*');
	if (n >= 1)
		putchar('\n');

	return 0;
}
