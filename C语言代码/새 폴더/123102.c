#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int m = 0;
	int n = 0;
	printf("Enter a 24-hour time:");
	scanf("%d%d", &m, &n);
	
	if (m > 12)
	{
		m = m - 12;
		printf("Equivalent 12-hour time:%d:%d PM", m, n);
	}
	else if (m==12)
	{
		printf("Equivalent 12-hour time:%d:%d PM", m, n);
	}
	else
	{
		printf("Equivalent 12-hour time:%d:%d AM", m, n);
	}
	return 0;
}