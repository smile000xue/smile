#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int estimate(int year)
{
	/*if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		return 1;
	else
		return 0;*/
	return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (estimate(year) == 1)
		{
			printf("%d ", year);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}