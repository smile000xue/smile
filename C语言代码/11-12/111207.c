#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m,n;
	printf("positieve integer");
	scanf("%d", &m);
	n = m;

	while (m > 0) {
		if (n == m--) {
			printf("+");
			n = n - 2;
		}
		else
			printf("-");
		
	}

	return 0;
}