#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int number=0;
//	int number1 = 0;
//	int digit = 0;
//	printf("Enter a number: ");
//	scanf("%d", &number);
//	/*number1 = number;
//	while (number1)
//	{ 
//		number1 /= 10;
//		digit++;
//	}*/
//	if (0 <= number && number <= 9)
//		digit = 1;
//	if (10 <= number && number <= 99)
//		digit = 2;
//	if (100 <= number && number <= 999)
//		digit = 3;
//
//	printf("The number %d has %d digits",number,digit);
//
//	return 0;
//}

//int main()
//{
//	int shour = 0;
//	int smin = 0;
//	printf("Enter a time in Seoul (24-hour time): ");
//	scanf("%d:%d", &shour,&smin);
//
//	if (shour - 8 <= 0)
//		printf("Time in London (12-hour time):%d:%dPM",shour+4,smin);
//	else if (shour - 8 > 0 && shour - 8 <12)
//		printf("Time in London (12-hour time):%d:%dAM", shour -8, smin);
//	else
//		printf("Time in London (12-hour time):%d:%dPM", shour - 20, smin);
//
//
//	return 0;
//}

int main()
{
	int grade;
	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	if(grade==100)
		printf("Letter grade: A");
	else
	{
		switch (grade / 10)
		{
		case 9:printf("Letter grade: A"); break;
		case 8:printf("Letter grade: B"); break;
		case 7:printf("Letter grade: C"); break;
		case 6:printf("Letter grade: D"); break;
		case 5:case 4:case 3:case 2:case 1:case 0:printf("Letter grade: F"); break;
		default:printf("Error"); break;
		}
	}

	return 0;
}