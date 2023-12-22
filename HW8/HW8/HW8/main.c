#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdio.h>
//
//int main()
//{
//	int a = 0x11223344;
//
//	char* p1 = (char*)&a;
//	int* p2 = &a;
//
//	/*指针变量的类型决定了指针加1减1的时候，增加了多少*/
//	/*printf("%p\n", &a);
//	printf("%p\n", p1);
//	printf("%p\n", p1+1);
//	printf("%p\n", p2);
//	printf("%p\n", p2+1);*/
//
//	/*指针的类型决定了指针解引用访问的地址*/
//	*p1 = 0;
//	printf("%p\n", p1);
//	printf("%d\n", *p1);
//	*p2 = 1;
//	printf("%p\n", p2);
//	printf("%d\n", *p2);
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}
//int stringlength(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//
//	return p-s;
//}
//int main()
//{
//	char *s = "dk345hgfns";
//
//	int length = stringlength(s);
//
//	printf("%d", length);
//
//
//	return 0;
//}

//void swap(int* A, int* B)
//{
//	*A = *A ^ *B;//1010,1100 ->0110
//	*B = *A ^ *B;//0110,1100 ->1010
//	*A = *A ^ *B;//0110,1010 ->1100
//}
//
//int main()
//{
//	int a, b;
//	printf("Enter 2 numbers:%t");
//	scanf("%d %d", &a, &b);
//	if (a > b)
//	{
//		swap(&a, &b);
//	}
//	printf("Swapped:%d %d\n", a, b);
//
//	return 0;
//}

//void find_GCD_LCM(int arr[], int n, int* GCD, int* LCM)
//{
//	int max =  arr[0] > arr[1] ? arr[0]:arr[1];
//	int min = arr[0] > arr[1] ? arr[1] : arr[0];
//
//	int i = 0;
//	for (i=min; i > 1; i--)
//	{
//		if (max % i == 0&&min%i==0)
//		{
//			break;
//		}
//	}
//	*GCD = i;
//	for (i = max; i >= max; i++)
//	{
//		if (i % max == 0 && i % min == 0)
//		{
//			break;
//		}
//	}
//		*LCM = i;
//}
//int main()
//{
//	int arr[2] = { 0 };
//	int n = 2;
//	int  GCD = 0;
//	int  LCM= 0;
//
//	printf("Two numbers:");
//	scanf("%d %d", &arr[0], &arr[1]);
//
//	find_GCD_LCM(arr, n, &GCD, &LCM);
//
//	printf("GCD:%d\n",GCD);
//	printf("LCM:%d\n", LCM);
//
//
//	return 0;
//}

//void pay_amount(int dollars, int* twenties, int* tens, int* fives, int* ones)
//{
//	*twenties = dollars / 20;
//	dollars %=  20;
//	*tens= dollars / 10; 
//	dollars %= 10; 
//	*fives = dollars / 5;
//	dollars %= 5;
//	*ones= dollars / 1;
//}
//int main()
//{
//	int dollars, twenties,tens,fives,ones;
//
//	printf("Enter a dollar amount:");
//	scanf("%d", &dollars);
//
//	pay_amount(dollars, &twenties, &tens,&fives,&ones);
//
//	printf("$20 bills:%d\n", twenties);
//	printf("$10 bills:%d\n", tens);
//	printf("$5 bills:%d\n", fives);
//	printf("$1 bills:%d\n", ones);
//
//	return 0;
//}

//void swap(int* A, int* B);
//void bubble(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i-1; j++)
//		{
//			swap(&arr[j], &arr[j + 1]);
//		}
//	}
//}
//void swap(int* A, int* B)
//{
//	if (*A > *B)
//	{
//		*A = *A ^ *B;
//		*B = *A ^ *B;
//		*A = *A ^ *B;
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("Enter 10 numbers:");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble(arr, sizeof(arr) / sizeof(arr[0]));
//
//	printf("Ascending order :");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\nMedian:%d",(arr[4]+arr[5])/2);
// 
//	return 0;
//}

//const int arr[18] = {
//	20 * 60 + 45,22 * 60 + 38,15 * 60 + 45,17 * 60 + 55,12 * 60+47,15 * 60,8 * 60,10 * 60 + 16,
//	11 * 60 + 19,13 * 60 + 35,9 * 60 + 43,13 * 60 + 32,14 * 60,18 * 60 + 8,19 * 60,23 * 60 + 20
//};//Sort by shortest time
//int check_flight(int desired_dept_time, int desired_arr_time, int* departure_time, int* arrival_time)
//{
//	int i = 0;
//	for (i = 0; i < 15; i += 2)
//	{
//		if (arr[i] >= desired_dept_time && arr[i + 1] <= desired_arr_time)
//			return i;
//	}
//}
//int main()
//{
//	int dh, dm, ah,am;
//	int desired_dept_time, desired_arr_time, departure_time, arrival_time;
//	printf("Enter a departure time (24-hour): ");
//	scanf("%d:%d", &dh, &dm);
//	printf("Enter an arrival time (24-hour): ");
//	scanf("%d:%d", &ah, &am);
//	desired_dept_time = dh * 60 + dm;
//	desired_arr_time = ah * 60 + am;
//
//	int i=check_flight(desired_dept_time, desired_arr_time, &departure_time, &arrival_time);
//
//	printf("Flight times:\n");
//	printf("Departure time               Arrival time\n");
//
//	if (arr[i] >= 12 * 60)
//	{
//		printf("%d:%dpm", arr[i] / 60 - 12, arr[i] % 60);
//	}
//	else
//	{
//		printf("%d:%dam", arr[i] / 60, arr[i] % 60);
//	}
//	if (arr[i + 1] >= 12 * 60)
//	{
//		printf("                      %d:%dpm", arr[i + 1] / 60 - 12, arr[i + 1] % 60);
//	}
//	else
//	{
//		printf("                       %d:%dam", arr[i + 1] / 60, arr[i + 1] % 60);
//	}
//		
//	return 0;
//}

//int coun(const char* message, char* chs, int i, int j);
//void count_occurrence(const char* message, char* chs);
//
//int main()
//{
//	char chs[5] = "";
//	char message[] = "time and tide wait for no man";
//	printf("Message: \"%s\"\n",message);
//	printf("Enter characters: ");
//	scanf("%s", chs);
//
//	count_occurrence(message,chs);
//
//	return 0;
//}
//
//void count_occurrence(const char* message, char* chs)
//{
//	int i = 0;
//	for (i = 0; chs[i] != '\0'; i++)
//	{
//		int j = 0;
//		for (j = i; chs[j] != '\0'; j++)
//		{
//			int z = 0;
//			int count=coun(message, chs, i, j);
//			if (count > 0)
//			{
//				for (z = i; z <= j; z++)
//				{
//					printf("%c", chs[z]);
//				}
//				printf(":%d\n", count);
//			}
//			
//		}
//	}
//}
//int coun(const char* message, char* chs, int i, int j)
//{
//	int z = 0;
//	int count = 0;
//	int tmp = i;
//	while (j >= i)
//	{
//		while (message[z] != '\0')
//		{
//			if (chs[i] == message[z])
//			{
//				if (j == i)
//				{
//					z++;
//					count++;
//					i = tmp;
//				}
//				else
//				{
//					z++;
//					i++;
//					break;
//				}
//			}
//			else
//			{
//				i = tmp;
//				z++;
//			}
//		}
//		if (message[z] == '\0')
//		{
//			break;
//		}
//	}
//	return count;
//}