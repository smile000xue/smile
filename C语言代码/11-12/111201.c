#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no;
	printf("Please enter an positive integer");
	scanf("%d",& no);

	while (no >= 0) {
		printf("%d ", no);
		no--;
	}
	return 0;
}
