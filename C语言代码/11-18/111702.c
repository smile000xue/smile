#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 80

int main(void)
{
	int m, n;
	int number;
	int a[NUMBER];
	int b[11] = { 0 };

	printf("Please enter the number of students:");
	do {
		scanf("%d", &number);
		if (number < 1 || number>NUMBER) {
			printf("Please enter a number ranging from 1 to %d:", NUMBER);
		}
	} while (number < 0 || number>NUMBER);

	printf("Please enter the scores of %d pepole.\n", number);
	for (m = 0; m < number; m++) {
		printf("No.%2d:", m + 1);
		do {
			scanf("%d",&a[m]);
			if (a[m] < 0 || a[m]>100) {
				printf("\aPlease enter a numbe ranging from 0 to 100:");
			}
		} while (a[m] < 0 || a[m]>100);
		b[a[m] / 10]++;
	}
	
	puts("\n---map of distribution---");
	for (n = 0; n < 10; n++) {
		printf("%3d-%3d:", n * 10, n * 10 + 9);
		for (m = 0; m < b[n]; m++) {
			putchar('*');
		}
		putchar('\n');
		
	}
	printf("   100:");
	for (n = 0; n < b[10]; n++) {
		putchar('*');
	}
	putchar('\n');
	return 0;
}