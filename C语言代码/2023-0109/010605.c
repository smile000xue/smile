#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Print the 9*9 multiplication table
void print_table(int n)
{
	int i = 1;
	for (i = 1; i <= n; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ", i, j, i * j);
		}
		putchar('\n');
	}
}

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d", &n);

	printf("Print %d*%d Mutiplication Table\n", n, n);
	print_table(n);

	return 0;
}