#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int m;
	int number;
	int a[NUMBER];

	printf("Number of data:");
	do {
		scanf("%d", &number);
		if (number < 0 || number>NUMBER) {
			printf("Please enter number of 1-%d:",NUMBER);
		}
	} while (number < 0 || number>80);

	for (m = 0; m < number; m++) {
		printf("NO.%d:", m + 1);
		scanf("%d", &a[m]);
	}
	printf("{");
	for (m = 0; m < number; m++) {
		printf("%d", a[m]);
		if (m != number - 1) {
			printf(", ");
		}
	}
	printf("}");
	return 0;
}