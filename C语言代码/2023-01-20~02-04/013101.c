#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int i;//Ĭ����0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof����Ľ����������unsigned int
//		//�з��ŵ�i���޷��ŵ�sizeof����Ľ���Ƚϻ��Ȱ�iת�����޷��ŵ�
//		//���������i��11111111111111111111111111111111
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//�������Calculate the sum

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	int sum = 0;
//	int i = 10;
//	int b = a;
//	for (i = 10; i <= 100000; i*=10)
//	{
//		sum += a;
//		if (i == 100000)
//			printf("%d=", a);
//		else
//			printf("%d+", a);
//		a = b * i + a;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//ʹ��ָ���ӡ��������

//void print(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	print(arr, len);
//
//	return 0;
//}

//��ӡˮ�ɻ���
//���0��100000֮�����еġ�ˮ�ɻ���������ӡ
//ˮ�ɻ�����һ��nλ�������λ����n�η��͵��ڸ�������
//��153=1^3+5^3+3^5
//
//#include <math.h>

//��һ��

//int main()
//{
//	int i = 0;
//	//�ж��Ƿ�Ϊˮ�ɻ���
//	for (i = 0; i <= 100000; i++)//����0��100000��
//	{
//		int j = 0;
//		int num = 0;
//		int sum = 0;
//		int count = 1;
//
//		//1.���������λ��
//		for (j = 10; j <= 100000; j *= 10)
//		{
//			if (i >= j)
//				count++;
//			else
//				break;
//		}
//
//		//2.0��Ϊˮ�ɻ���
//		if (i == 0)
//		{
//			printf("%d\n", i);
//			continue;
//		}
//
//		//3.�����λ��n�η���
//		int c = 0;
//		for (j = 10; j <= i*10; j *= 10)
//		{
//			num = i % j;
//			c = j;
//			while (c > 10)
//			{
//				num /= 10;
//				c /= 10;
//			}
//			sum += pow(num, count);
//		}
//
//		//4.�ж�
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//
//	return 0;
//}

//�ڶ���

//int main()
//{
//	int i = 0;
//
//	//1.����0��100000��
//	for (i = 0; i <= 100000; i++)
//	{
//
//		//2.���������λ��
//		int tmp = i;
//		int count = 1;
//		while (tmp /= 10)
//		{
//			count++;
//		}
//
//		//3.�����λ����n�η���
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//
//		//4.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
//}

//дһ������������һ���ַ���������

//#include<assert.h>
//
//void reverse(char* arr, int sz)
//{
//	assert(arr);
//	int i = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		if (*(arr + i)!=0)
//			putchar(*(arr + i));
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//
//	return 0;
//}

//��ӡ����

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2*i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2*(n-1-i)- 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��������ƿ��һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ

//��һ��

//int main()
//{
//	int n = 0;
//	int drink = n;
//	int count = 0;
//
//	while (n>1)
//	{
//		while (n)
//		{
//			if (n % 2)
//			{
//				count++;
//				n--;
//			}
//			else
//			{
//				drink += n / 2;
//				n /= 2;
//			}
//		}
//		n = count;
//		count = 0;
//	}
//	printf("%d", drink);
//
//
//	return 0;
//}

//�ڶ���

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//
//	return 0;
//}

//����������������ż����˳��ʹ������ȫ����ż��ǰ��

//void adjust(int* p, int sz)
//{
//	int* left = p;
//	int* right = p + sz - 1;
//	int tmp = 0;
	/*while (left < right)
	{
		while (left < right &&*left % 2 == 0)
		{
			while (left < right)
			{
				if (*right % 2 == 1)
				{
					tmp = *left;
					*left = *right;
					*right = tmp;
					break;

				}
				else
					right--;
			}
		}
		left++;
	}*/

//	while (left < right)
//	{
//		while ((left < right)&&(*left % 2 == 1) )
//		{
//			left++;
//		}
//		while ((left < right)&&(*right % 2 == 0) )
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//
//
//}
//
//int main()
//{
//	int arr[] = { 2,4,6,8,11,41,0,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	adjust(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}