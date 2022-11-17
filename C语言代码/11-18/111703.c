#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 80

int main()
{
	int m;
	int number=0;
	int a[NUMBER]={0};
	int b[11]={0};
	char c ='*';
	char d =' ';

	printf("Please enter the number of students:");
	do {
		scanf("%d", &number);
		if (number < 1 || number>80) {
			printf("Please enter a number ranging 1 to %d:", NUMBER);
		}
	} while (number < 1 || number>80);
	printf("Please enter the scores of %d students.\n",number);
	for (m = 0; m < number; m++) {
		printf("NO.%d:", m + 1);
		do {
			scanf("%d", &a[m]);
			if (a[m] < 0 || a[m]>100) {
				printf("Please enter a number ranging 0 to 100;");
			}
		} while (a[m] < 0 || a[m]>100);
		b[a[m] / 10]++;
	}

	puts("Distribution map");

	int max = 0;
	for (m = 0; m < 11; m++) {
		if (max < b[m]) {
			max = b[m];
		}
	}
	do {
		for (m = 1; m < 12; m++) {
			if (b[m - 1] == max) {
				printf("%4c", c);
				b[m - 1]--;
			}
			else
				printf("%4c", d);
		}
		putchar('\n');
		max--;
	} while (max > 0);
	putchar('\n');

	puts("------------------------------------------");
	for (m = 0; m < 101; m += 10) {
		printf("%4d", m);
	}
	return 0;
}