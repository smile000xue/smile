#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	
	int a = 0;
	int b= 0;
	int c = 0;
	int d = 0;
	int count = 0;

	for (a = 1000; a <= 2000; a += 4)
	{
		/*b = a % 4;
		c = a % 100;
		d = a % 400;
		if (b == 0 && c != 0)
		{
			printf("%d\n", a);
			continue;
		}
		else if (d == 0)
		{
			printf("%d\n", a);
		}*/
		if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
		{
			printf("%d ", a);
			count++;
		}
		

	}
	printf("\ncount=%d\n", count);

	return 0;
}