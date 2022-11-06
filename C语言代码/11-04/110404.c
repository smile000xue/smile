#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;
	puts("please enter three integers");
	printf("integera:"); scanf("%d", &a);
	printf("integerb:"); scanf("%d", &b);
	printf("integerc:"); scanf("%d", &c);

	if (a == b && b == c)
		printf("Three numbers are the equal");
	else if (a == b || b == c)
		printf("There are two values that are equal.");
	else if (a != b && b != c)
	    printf("They are not equal.");

	return 0;
}
