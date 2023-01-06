#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void change(int num)
{
	if (num > 9)
		change(num / 10);
	printf("%d ", num%10);

}

int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d", &num);

	change(num);


	return 0;
}