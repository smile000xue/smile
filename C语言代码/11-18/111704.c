#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0; int j = 0; int k = 0;
	int a[4][3] = { 0 };
	int b[3][4] = { 0 };
	int c[4][4] = { 0 };

	printf("Please enter the numbers of Array a[4][3].\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			printf("a[%d][%d]=", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("Please enter the numbers of Array b[3][4].\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("b[%d][%d]=", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (k = 0; k < 3; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("The number of Array a* Array b.\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}