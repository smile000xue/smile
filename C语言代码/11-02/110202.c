#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int m;
	printf("please enter a integer:");
	scanf("%d", &m);
	if (m == 0)
		printf("The absolute value is 0");
	else if (m > 0)
		printf("The absolute value is %d",m);
	else
		printf("The absolute value is %d",-m);


	return 0;
}