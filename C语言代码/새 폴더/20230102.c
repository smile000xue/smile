#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Thr first idea:

/*int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("Enter three numbers:");
	scanf("%d%d%d", &num1, &num2, &num3);

	if (num1 >= num2)
	{
		if (num1 >= num3) 
		{
			if (num2 >= num3) {
				printf("%d %d %d\n", num1,num2, num3);
			}
			else {
				printf("%d %d %d\n", num1,num3,num2);
			}
		}
		else 
		{
			printf("%d %d %d\n", num3,num1,num2);
		}
	}
	else
	{
		if (num2 > num3)
		{
			if (num1 > num3)
			{
				printf("%d %d %d\n", num2, num1, num3);
			}
			else
			{
				printf("%d %d %d\n", num2, num3, num1);
			}
		}
		else
		{
			printf("%d %d %d\n", num3, num2, num1);
		}
	}

	return 0;
}
*/

//The second way:

/*
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	printf("Enter three numbers");
	scanf("%d%d%d", &a,&b, &c);

	if (a < b)
	{
		tmp = b;
		b = a;
		a = tmp;
	}
	if (a < c)
	{
		tmp = c;
		c = a;
		a = tmp;
	}
	if (b < c)
	{
		tmp = c;
		c = b;
		b = tmp;
	}

	printf("%d %d %d", a, b, c);

	return 0;
}
*/

//The third idea:
#define _CRT_SECURE_NO_WARNINGS 1
int change(int *a, int *b)
{
	int tmp = 0;

	tmp = *b;
	*b = *a;
	*a = tmp;
	return 0;
}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int *p1 = 0;
	int *p2 = 0;
	int *p3 = 0;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	printf("Enter three numbers:");
	scanf("%d%d%d", &a, &b, &c);

	if (a < b)
	{
		change(p1,p2);
	}
	if (a < c)
	{
		change(p1, p3);
	}
	if (b < c)
	{
		change(p2,p3);
	}

	printf("%d %d %d", a, b, c);

	return 0;
}