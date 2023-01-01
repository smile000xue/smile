#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	printf("Find the largest common factor of two integer\n");
	printf("Number1:"); scanf("%d", &m);
	printf("Number2:"); scanf("%d", &n);

	int lar = m;
	if (m > n)
	{
		lar = n;
	}
	while (lar >= 1)
	{
		if (m % lar == 0 && n % lar == 0)
		{
			printf("The largest common factor of %d and %d is %d.\n", m, n, lar);
			break;
		}
		lar--;
	}

	return 0;
}