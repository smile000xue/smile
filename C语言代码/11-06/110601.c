#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m;
	printf("please enter an integger:");
	scanf("%d", &m);

	switch (m % 2) {
	case 0:printf("The number is even"); break;
	case 1:printf("The number is odd"); break;
	}
	return 0;
}