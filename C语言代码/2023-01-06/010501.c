#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(int num)
{
	if (num <= 1)
		return 1;
	else
		return num * cal(num - 1);
}

int main()
{
	int num = 0;
	printf("Enter a number:");
	scanf("%d", &num);

	printf("%d",cal(num));

	return 0;
}