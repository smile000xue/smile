#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int no,mo;
	printf("Please enter an positive integer:");
	scanf("%d", &no);

	mo = no;

	while (no >= 1) {
		printf("%d ", no--);
	}
	if (mo >= 0)
		printf("\n");
	return 0;
}