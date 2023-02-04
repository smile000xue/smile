#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//明解c语言 10-1

//void adjust_point(int* n)
//{
//	int a = 5;
//	while (a--)
//	{
//		if (*n < 0)
//			*n = 0;
//		else if (*n > 100)
//			*n = 100;
//		n++;
//	}
//
//}
//
//int main()
//{
//	int arr[5] = { -4,45,78,231,14 };
//
//	adjust_point(arr);
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//明解c语言 10-2

//void decrement_date(int* y, int* m, int* d)
//{
//	if (*d != 1)
//		(* d)--;
//	else
//	{
//		switch (*m)
//		{
//		case 1:(* y)--; *m = 12; *d = 31; break;
//		case 4:
//		case 2:
//		case 6:
//		case 8:
//		case 9:
//		case 11:( * m)--; *d = 31; break;
//		case 3: 
//		{
//			(*m)--;
//			if (*y % 4 == 0 && *y % 100 != 0 || *y % 400 == 0)
//				*d = 28;
//			else
//				*d = 29;
//		}
//		break;
//		case 5:
//		case 7:
//		case 10:
//		case 12:(*m)--; *d = 30; break;
//		}
//
//	}
//}
//
//void increment_date(int* y, int* m, int* d)
//{
//	switch (*m)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//		if (*d == 31)
//		{
//			(*m)++; *d = 1;
//		}
//		else
//		{
//			(*d)++;
//		}
//		break;
//	case 12:
//		if (*d == 31)
//		{
//			(*y)++; *m = 1; *d = 1;
//		}
//		else
//		{
//			(*d)++;
//		}
//		break;
//	case 2:
//		if (*y % 400 == 0|| *y % 4 == 0 && *y % 100 != 0)
//		{
//			if (*d == 28)
//			{
//				(*m)++;
//				*d = 1;
//			}
//			else
//				(*d)++;
//		}
//		else
//		{
//			if (*d == 29)
//			{
//				(*m)++;
//				*d = 1;
//			}
//			else
//				(* d)++;
//		}
//		break;
//	case 4: 
//	case 6:
//	case 9:
//	case 11:
//		if (*d == 30)
//		{
//			(*m)++; *d = 1;
//		}
//		else
//		{
//			(*d)++;
//		}
//		break;
//	}
//	
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	scanf("%d %d %d", &y, &m, &d);
//
//	int y1 = y;
//	int m1 = m;
//	int d1 = d;
//
//	printf("%d-%d-%d的前一天为:",y,m,d);
//	decrement_date(&y, &m, &d);
//	printf("%d-%d-%d\n", y, m, d);
//
//	printf("%d-%d-%d的后一天为:", y1, m1, d1);
//	increment_date(&y1, &m1, &d1);
//	printf("%d-%d-%d\n", y1, m1, d1);
//
//
//	return 0;
//}

//明解c语言 10-3

//void change(int* a, int* b)
//{
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//
//void sort3(int* a, int* b, int* c)
//{
//	if (*a > *b)
//	{
//		change(a, b);
//		if (*b > *c)
//		{
//			change(b, c);
//			if (*a > *b)
//			{
//				change(a, b);
//			}
//		}
//
//	}
//	else
//	{
//		if (*b > *c)
//		{
//			change(b, c);
//			if (*a > *b)
//			{
//				change(a, b);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	sort3(&a, &b, &c);
//	printf("%d %d %d", a, b, c);
//
//
//	return 0;
//}

//明解c语言 10-4

//#define N 100
//
//void set_idx(int *v, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		*(v + i) = i;
//	}
//
//}
//
//int main()
//{
//	int v[N] = { 0 };
//
//	set_idx(v, N);
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		printf("v[%d]=%d\n", i,v[i]);
//	}
//
//	return 0;
//}

//明解c语言 10-5

//void arr_set(int arr[], int n, int val)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = val;
//	}
//
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//
//	//arr_set(arr, 2, 99);//数组名表示首元素的地址
//	//arr_set(&arr[2], 2, 99);//&数组名【2】是取地址
//	arr_set(arr+2, 2, 99);//数组名加数字表示n项的地址
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[%d]=%d\n",i, arr[i]);
//	}
//
//	return 0;
//}
