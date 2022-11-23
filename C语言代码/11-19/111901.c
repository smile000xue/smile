#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[6][2] = { 0 };
	int m, n;
	int sum1[2] = {0}; int aver1[2] = {0};
	int sum2[6] = {0}; int aver2[6] ={0};
	printf("Please enter the scores.\n");

	for (m = 0; m < 6; m++) {
		for (n = 0; n < 2; n++) {
			printf("No.%d,%dtime exam score:", m + 1, n + 1);
			scanf("%d", &a[m][n]);
			sum2[m] += a[m][n];
	
		}
		aver2[m] = sum2[m] / 2;
		
	}
	
	for (n = 0; n < 2; n++) {
		for (m = 0; m < 6; m++) {
			sum1[n] += a[m][n];
		}
		aver1[n] = sum1[n] / 6;
	}
	printf("Chinese total score:%d,Math total score:%d.\n", sum1[0], sum1[1]);
	printf("Chinese average score:%d,Mathe average score:%d.\n", aver1[0], aver1[1]);

	for (m = 0; m < 6; m++) {
			printf("No.%d,total score:%d,average score:%d.\n", m+1, sum2[m],aver2[m]);
	}
	return 0;
}