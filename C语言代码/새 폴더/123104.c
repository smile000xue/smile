#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int m = 0;
	int s = 1;
	int sum = 0;
	printf("n=");
	scanf("%d", &n);

	for (m = 1; m < n + 1; m++) {
		s *= m;
		sum += s;
	}
	printf("SUM=%d",sum);

	return 0;
}