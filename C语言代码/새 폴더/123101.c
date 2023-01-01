#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n, w, y, lar, smal;
	printf("Enter four integers:");
	scanf("%d %d %d %d", &m, &n, &w, &y);
	lar = smal = m;
	if (m < n)
		lar = n;
	else
		smal = n;
	if (m < w)
		lar = w;
	else
		smal = w;
	if (m < y)
		lar = y;
	else
		smal = y;

	printf("Largest:%d\n", lar);

	printf("Smallest:%d\n", smal);

	return 0;
}