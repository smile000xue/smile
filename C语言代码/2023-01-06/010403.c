#include <stdio.h>

int main()
{
	int i = 0;
	int count = 0;
	int m = 0;
	int n = 0;
	for (i = 1; i <= 100; i++)
	{
		/*if (i < 10)
		{
			if (9 == i)
			{
				count++;
			}
		}
		else
		{*/
			m = i % 10;
			n = i / 10;
			if (9 == m )
			{
				count++;
			}
			if (9 == n)
			{
				count++;
			}

	}
	printf("There are %d 9\n",count);


	return 0;
}