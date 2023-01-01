#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int grade = 0;
	printf("Enter numerical grade:");
	scanf("%d", &grade);

	switch (grade / 10) {
	case 10: switch (grade) {
	                   case 100: printf("Letter grade:A"); break;
	                   default: printf("Error"); break;
	} break;
	case 9: printf("Letter grade:A"); break;
	case 8:printf("Letter grade:B"); break;
	case 7:printf("Letter grade:C"); break;
	case 6:printf("Letter grade:D"); break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:printf("Letter grade:F"); break;
	default:printf("Error"); break;

	}
	return 0;
}