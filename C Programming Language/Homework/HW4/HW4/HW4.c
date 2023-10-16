#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int days = 0;
//	int week = 0;
//	printf("Enter number of days in month:");
//	scanf("%d", &days);
//	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
//	scanf("%d", &week);
//	printf("Sun   Mon   Tue   Wed   Thu   Fri   Sat\n");
//
//	int j = 1;
//	for (j = 1; j < week; j++)
//	{
//		printf("      ");
//	}
//	int i = 1;
//	while (i <= days)
//	{
//		for (j = week; j < 8; j++)
//		{
//			printf("%-3d   ",i++);
//			if (i > days)
//				break;
//		}
//		week = 1;
//		printf("\n");
//	}
//
//	return 0;
//}
//int main()
//{
//	int mm = 0;
//	int dd = 0;
//	int yy = 0;
//	int mm1 = 0;
//	int dd1 = 0;
//	int yy1 = 0;
//	do
//	{
//		printf("Enter a date (mm/dd/yy): ");
//		scanf("%d/%d/%d", &mm1, &dd1, &yy1);
//		if (yy1 > yy)
//		{
//			yy = yy1;
//			mm = mm1;
//			dd = dd1;
//		}
//		if (yy1 == yy)
//		{
//			if (mm1 > mm)
//			{
//				yy = yy1;
//				mm = mm1;
//				dd = dd1;
//			}
//			if(mm1 == mm&& dd1 > dd)
//			{
//				yy = yy1;
//				mm = mm1;
//				dd = dd1;
//			}
//		}
//
//	} while (mm1 != 0 || dd1 != 00 || yy1 != 00);
//
//	printf("%d/%d/%0.2d is the latest date", mm, dd, yy);
//
//	return 0;
//}
int main()
{
	int n = 0;
	printf("Enter a number:");
	scanf("%d", &n);
	printf("\nTriangle:\n\n");
	int i = 0;
	for (i = 0; i < (n+1)/2; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			printf("   "); 
		}
		for (j = 0; j < n-2*i; j++)
		{
			printf("*  ");
		}
		for (j = 0; j < i; j++)
		{
			printf("   ");
		}
		printf("\n");
	}

	return 0;
}