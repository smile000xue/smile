#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 8

int main(void)
{
	int a,t;
	int b[NUMBER];

	for (a = 0; a < NUMBER; a++) {
		printf("b[%d]:", a);
		scanf("%d", &b[a]);
	}
	t = (NUMBER % 2 != 0) ? (NUMBER - 1)/2 : NUMBER / 2;
	for (a = 0; a < t; a++) {
		int d;
		d = b[a];
		b[a] = b[NUMBER - a - 1];
		b[NUMBER - a - 1] = d;
	}

	puts("CHANGE");
	for (a = 0; a < NUMBER; a++) {
		printf("b[%d]=%d\n", a, b[a]);
	}
	return 0;
}