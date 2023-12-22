#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int array[10];
//	int sum=0,i=0;
//	printf("Enter 10 numbers:\t");
//	while (i < 10)
//	{
//		scanf("%d", &array[i]);
//		i++;
//	}
//	i--;
//	while (i >= 0)
//	{
//		if (array[i] % 2 == 0)
//		{
//			sum += array[i];
//		}
//		i--;
//	}
//	printf("Sum of even numbers:\t%d", sum);
//
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int i = 0, j = 0, minr[5] = { 0 }, minc[5] = { 0 };
//	for (i = 0; i < 5; i++)
//	{
//		int flag = 0;
//		printf("Enter row %d:\t",i+1);
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &a[i][j]);
//			if (flag == 0)
//			{
//				minr[i] = a[i][0];
//				flag++;
//			}
//			if (minr[i] > a[i][j])
//			{
//				minr[i] = a[i][j];
//			}
//		}
//	}
//	for (j = 0; j < 5; j++)
//	{
//		int flag = 0;
//		for (i = 0; i < 5; i++)
//		{
//			if (flag == 0)
//			{
//				minc[j] = a[0][j];
//				flag++;
//			}
//			if (minc[j] > a[i][j])
//			{
//				minc[j] = a[i][j];
//			}
//		}
//	}
//	printf("Row Min:\t");
//	for (j = 0; j < 5; j++)
//	{
//		printf("%-3d", minr[j]);
//	}
//	printf("\nColumn Min:\t");
//	for (j = 0; j < 5; j++)
//	{
//		printf("%-3d", minc[j]);
//	}
//
//	return 0;
//}

int main()
{
	char firstn = 0, a=0,i = 0, lastn[20] = { 0 };
	printf("Enter a first name and last name: ");
	scanf("%c", &firstn);
	while ((a=getchar() )!= ' ')
	{

	}
	while ((lastn[i] = getchar()) != '\n')
	{
		i++;
	}
	printf("You entered the name:");
	for (i = 0; i < 20; i++)
	{
		if (lastn[i] == '\n')
		{
			break;
		}
		printf("%c", lastn[i]);
	}
	printf(",%c", firstn);

	return 0;
}