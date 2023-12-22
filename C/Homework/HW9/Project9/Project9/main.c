#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include<malloc.h>
#include<assert.h>

//ÓÐ´íÎó
//typedef struct {
//
//	int data;
//	int fre;
//	struct linkedlist* next;
//}linkedlist,*linkedlistp;
//
//linkedlistp InsertList(linkedlistp L, int* p, int i);
//void PrintNode(linkedlistp L);
//
//int main()
//{
//	linkedlistp L=NULL;
//	int a[100] = { 0 };
//	int num ,count= 0;
//	int *p = a;
//
//	printf("Enter integers:");
//	scanf("%d",&num);
//	while (num != 0&&count<100)
//	{
//		(*(p + num))++;
//		L = InsertList(L, p, num);
//		scanf("%d", &num);
//		count++;
//	}
//
//	printf("Output:");
//
//	PrintNode(L);
//
//	return 0;
//}
//
//linkedlistp InsertList(linkedlistp L, int* p, int i)
//{
//	if (L == NULL || L->fre < *(p + i))
//	{
//		linkedlistp p2 = (linkedlistp)malloc(sizeof(linkedlist));
//		assert(p2 != NULL);
//		p2->data = i;
//		p2->fre = *(p + i);
//		if (L != NULL)
//		{
//			p2->next = L;
//
//		}
//		else
//		{
//			p2->next = NULL;
//		}
//		return p2;
//	}
//	else
//	{
//		L->next = InsertList(L->next, p, i);
//	}
//	return L;
//}
//
//	
//void PrintNode(linkedlistp L)
//{
//	static j=0;
//	int a[100] = { 0 };
//	while (L != NULL)
//	{
//		int i = 0;
//		while (i < 100 && a[i++] != L->data);
//		if (i == 100)
//		{
//			a[j++] = L->data;
//			printf("%d ", L->data);
//		}
//		L = L->next;
//	}
//	printf("0");
//}

//int main()
//{
//	char str[100] = "";
//	printf("Enter a message:");
//	
//
//	char* left=str;
//	char* right =  str;
//	scanf("%c", right);
//	while ( *right!= '\n')
//	{
//		if (('A' <= *right&& *right <= 'Z') || ('a' <= *right &&* right <= 'z'))
//		{
//			*right = toupper(*right);
//			right++;
//		}
//		scanf("%c", right);
//
//	}
//	right--;
//	while (right > left)
//	{
//		if (*right != *left)
//		{
//			printf("Not a palindrome\n");
//			break;
//		}
//		else
//		{
//			right--;
//			left++;
//		}
//	}
//	if (right <= left)
//	{
//		printf("Palindrome\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	char str[100] = "";
//	printf("Enter a message:");
//	gets(str);
//	/*int count = 0;
//	char* left=str;
//	char* right = str;
//	scanf("%c", right);
//	printf("Reversal is:");
//	while (*right != '\n')
//	{
//		while (*right != ' '&& *right != '\n')
//		{
//			count++;
//			scanf("%c", ++right);
//		}
//		if (*right != '\n')
//		{
//			scanf("%c", right);
//		}
//		left =right;
//		while (count--)
//		{
//			printf("%c", *--left);
//		}
//		count = 0;
//		printf(" ");
//	}*/
//
//	printf("Reversal is:");
//	char* p = str;
//	for (p = str + strlen(str) - 1; p >= str; p--)
//	{
//		printf("%c", *p);
//	}
//
//
//	return 0;
//}

//void SortEle(void);
//
//char a[10] = { 0 };
//int count[10] = { 0 };
//
//int main()
//{
//
//	printf("Enter 10 letters:");
//	int i = 0;
//	char u = 0;
//	while (i < 10)
//	{
//		scanf("%c", &u);
//		int j = 0;
//		while (j < 10)
//		{
//			if (a[j] == u)
//			{
//				count[j]++;
//				break;
//			}
//			if (a[j] == 0)
//			{
//				a[j] = u;
//				count[j]++;
//				break;
//			}
//			j++;
//		}
//		i++;
//	}
//
//	printf("Most frequent letter:");
//
//	SortEle();
//
//	int z = 0;
//	int n = count[z];
//	while (n <= count[z])
//	{
//		printf("%c ", a[z++]);
//	}
//
//
//
//	return 0;
//}
//
//void SortEle(void)
//{
//	int i = 0;
//	while (i < 10)
//	{
//		int j = 0;
//		while (j < 10-i)
//		{
//			if (count[j] < count[j + 1])
//			{
//				char temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				int temp1= count[j];
//				count[j] = count[j + 1];
//				count[j + 1] = temp1;
//			}
//			if (count[j] == count[j + 1]&&a[j]> a[j+1])
//			{
//				char temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//				int temp1 = count[j];
//				count[j] = count[j + 1];
//				count[j + 1] = temp1;
//			}
//			j++;
//		}
//		i++;
//	}
//}

//void SortEle(void);
//
//int a[10] = { 0 };
//int b[10] = { 0 };
//
//int main()
//{
//
//	printf("Enter 10 integers:");
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d", &a[i]);
//		b[i] = a[i];
//		i++;
//	}
//
//	printf("Rank:");
//
//	SortEle();
//
//	int z = 0;
//	while (z<10)
//	{
//		int j=0;
//		while (a[z] != b[j])
//		{
//			j++;
//		}
//		printf("r%d ", j+1);
//		z++;
//	}
//
//	return 0;
//}
//
//void SortEle(void)
//{
//	int i = 0;
//	while (i < 10)
//	{
//		int j = 0;
//		while (j < 10 - i-1)
//		{
//			if (b[j] > b[j + 1])
//			{
//				int temp1 = b[j];
//				b[j] = b[j + 1];
//				b[j + 1] = temp1;
//			}
//			j++;
//		}
//		i++;
//	}
//}