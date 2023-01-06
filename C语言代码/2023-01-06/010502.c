#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate(int n)
{
	if (n <= 2)
		return 1;
	else
		return calculate(n - 1) + calculate(n - 2);

}
int main()
{
	printf("Calculate the fibonacci number:");
	int n = 0;
	scanf("%d", &n); 
	int w = calculate(n);

	printf("%d",w);

	return 0;
}