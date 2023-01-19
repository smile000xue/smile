#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//青蛙跳台阶问题

int cal(int number)
{
	if (number == 1)
	{
		return 1;
	}
	if (number == 2)
	{
		return 2;
	}
	else
	{
		return cal(number - 1) + cal(number - 2);
	}

}

int main()
{
	int number = 0;
	printf("Please enter the number:");
	scanf("%d", &number);

	printf("The total way has %d",cal(number));

	return 0;
}