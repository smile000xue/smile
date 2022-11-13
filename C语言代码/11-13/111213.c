#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int m, n, inte;
	printf("Starting value(cm):");
	scanf("%d",&m);
	printf("Ending value(cm):");
	scanf("%d", &n);
	printf("Interval value(cm):");
	scanf("%d", &inte);
	 
	for (m = m; m <= n; m += inte) {
		printf("%dcm   %.2fkg", m,(m - 100) * 0.9);
		printf("\n");
	}


	return 0;
}