#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int m, n,k;
	int a[4][3] = { {2,3,4},{3,5,6},{3,4,5},{2,4,3} };
	int b[4][3] = { {2,3,5},{3,4,6},{4,5,7},{3,4.5} };
	int c[4][3][2] = { 0 };

	for (m = 0; m < 4; m++) {
		for (n = 0; n < 3; n++) {
			for (k = 0; k<2; k++) {
				if (k == 0) {
					c[m][n][k] = a[m][n];
				}
				else{
					c[m][n][k] = b[m][n];
				}
				printf("%2d", c[m][n][k]);
			}
			putchar(',');
		}
		printf("\n");
	}

	return 0;
}