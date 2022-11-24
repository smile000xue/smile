#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void alert(int n)
{
	while (n-- > 0) {
		printf("\a");
	}
}
int main()
{
	int a;
	printf("How many rings in a row:"); scanf("%d", &a);
	alert(a);
	return 0;
}