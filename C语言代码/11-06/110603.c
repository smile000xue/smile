#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a,b,c,d;
	a = (3 == 3); b = (3 == 4); c = (3 != 3), d = (3 != 4);
	printf("%d\n%d\n%d\n%d\n", a,b,c,d);

	return 0;
}