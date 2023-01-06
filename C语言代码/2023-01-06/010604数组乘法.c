#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mat(const int a[4][3], const int b[3][4], int c[4][4])
{
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int z = 0;
		for (z = 0; z < 4; z++)
		{
			int j = 0;
			int sum = 0;
			for (j = 0; j < 3; j++)
			{
				sum =sum + a[i][j] * b[j][z];
			}
			c[i][z] = sum;
		}
		
	}
}


int main()
{
	int a[4][3] = { {2,3,5},{5,6,8},{3,2,1},{2,7,9} };
	int b[3][4] = { {7,4,0,1},{0,2,1,0},{2,0,5,4} };
	int c[4][4];

	mat(a, b, c);

	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int z = 0;
		for (z = 0; z < 4; z++)
		{
			printf("%d ",c[i][z]);
		}
		putchar('\n');

	}
	return 0;
}