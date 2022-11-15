#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 8

int main(void)
{
	int a;
	int b[NUMBER];

	for (a = 0; a < NUMBER; a++) {
		printf("b[%d]:", a);
		scanf("%d", &b[a]);
	}
	if (NUMBER % 2 != 0) {
		for (a = 0; a < (NUMBER - 1) / 2; a++) {
			int d;
			d = b[a];
			b[a] = b[NUMBER - a - 1];
			b[NUMBER - a - 1] = d;
		}
	}
	else {
		for (a = 0; a < NUMBER / 2;a++) {
			int f;
			f = b[a];
			b[a] = b[NUMBER - a - 1];
			b[NUMBER - a - 1] = f;
		}
	}

	puts("CHANGE");
	for (a = 0; a < NUMBER; a++) {
		printf("b[%d]=%d\n", a, b[a]);
	}
	return 0;
}