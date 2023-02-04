#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Please enter two integer:");
	scanf("%d%d", &a, &b);

	c = a ^ b;

	int add = 0;
	int i = 0;
	int d = 1;
	for (i = 0; i < 32; i++)
	{
		if (c & (d << i))
		{
			add++;
		}
	}

	printf("%d",add);


	return 0;
}