#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	printf("please enter the month:");
    scanf("%d", &n);

	switch (n) {
	case 3:
	case 4:
	case 5:printf("%d is spring", n); break;
	case 6:
	case 7:
	case 8:printf("%d is smummer", n); break;
	case 9:
	case 10:
	case 11:printf("%d is fsll", n); break;
	case 12:
	case 1:
	case 2:printf("%d is winter", n); break;
	default: puts("none"); break;
	}
	return 0;

}