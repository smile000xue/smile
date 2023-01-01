#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Print prime numbers between 100 and 200

int main()
{
	int num = 0;

	for (num = 100; num <= 200; num++)
	{
		int a = 2;
		for (a = 2; a < num; a++)
		{
			if (num % a == 0)
			{
				break;
			}
			else if (num % a != 0)
			{
				if (a == num - 1)
					printf("%d ", num);

			}
		}

	}

	return 0;
}