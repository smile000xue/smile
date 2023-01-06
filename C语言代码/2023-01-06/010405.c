#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int main()
//{
//	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
//	printf("Enter ten numbers\n");
//	scanf("%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10);
//
//	if (a1 < a2)
//		a1 = a2;
//	if (a1 < a3)
//		a1 = a3;
//	if (a1 < a4)
//		a1 = a4;
//	if (a1 < a5)
//		a1 = a5;
//	if (a1 < a6)
//		a1 = a6;
//	if (a1 < a7)
//		a1 = a7;
//	if (a1 < a8)
//		a1 = a8;
//	if (a1 < a9)
//		a1 = a9;
//	if (a1 < a10)
//		a1 = a10;
//	printf("The largest number is %d", a1);
//
//	return 0;
//}

int main()
{
	
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	int i = 0;
	int max = arr[0];

	for (i = 0; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];

	}
	printf("%d", max);

	return 0;
}