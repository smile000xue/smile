#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include <malloc.h>
#include <assert.h>
//int main(void)
//{
//	char sentence[81];
//	scanf("%s", sentence); // scanf_s("%s", sentence, 81);
//	printf("%s", sentence);
//	puts(sentence);
//	return 0;
//}

//int main(void)
//{
//	char sentence[81];
//	gets(sentence);
//	printf("%s", sentence);
//	puts(sentence);
//	return 0;
//}

//void swap(char* p1, char* p2);
//
//int main()
//{
//	char	s[100] = { 0 };
//	char	s1[100] = { 0 };
//	int i = 0;
//	char c;
//	printf("Enter a string:");
//
//	scanf("%c", &c);
//	while (c != '\n')
//	{
//		if ('A' <= c && c <= 'Z')
//		{
//			int j = 0;
//			while (s[j] != c && s[j] != 0)j++;
//			if (s[j] == 0)
//			{
//				s[j] = c;
//				i++;
//			}
//		}
//		scanf("%c", &c);
//	}
//
//	int j = 0;
//	for (j = 0; j <= i; j++)
//	{
//		int z = 0;
//		for (z = 0; z < i - j-1; z++)
//		{
//			if (s[z] > s[z + 1])
//			{
//				swap(&s[z], &s[z + 1]);
//			}
//		}
//	}
//	printf("Upper - case letters:");
//	printf("%s\n",s);
//
//	return 0;
//}
//
//void swap(char* p1, char* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	printf("Enter the first string:");
//	gets(s1);
//	printf("Enter the second string:");
//	gets(s2);
//
//	int i = 0, count = 0, j = 0;
//	while (s1[i] != '\0')
//	{
//		while (s1[i] == s2[j]&&s2[j]!='\0' && s1[i] != '\0')
//		{
//			i++;
//			j++;
//		}
//		if (s2[i] == '\0')
//		{
//			count++;
//			j = 0;
//			i++;
//		}
//	}
//	printf("Occurrence: %d", count);
//
//
//	return 0;
//}

//void apped(char* s1, char* s2, int pos);
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	int pos = 0;
//
//	printf("Enter the first string:");
//	scanf("%s", s1);
//	printf("Enter the second string:");
//	scanf("%s", s2);
//	printf("Enter the position:");
//	scanf("%d", &pos);
//
//	apped(s1, s2, pos);
//
//	printf("String Appended:");
//	printf("%s",s1);
//
//	return 0;
//}
//void apped(char *s1,char * s2,int pos)
//{
//	int length1 = strlen(s1);
//	int length2 = strlen(s2);
//	if (length1 < length2)
//	{
//		int i = length1;
//		while (i >= pos)
//		{
//			*(s1 + i +length2) = *(s1 + i);
//			i--;
//		}
//		int j = 0;
//		while (++i <= length2)
//		{
//			s1[i] = s2[j++];
//		}
//	}
//	else
//	{
//		int i = length1;
//		while (i >= pos)
//		{
//			*(s1 + i + length2) = *(s1 + i);
//			i--;
//		}
//		int j = length2-1;
//		while (0 <= j)
//		{
//			s1[++i] = s2[j--];
//		}
//	}
//}

//#define Maxsize 20
//
//typedef struct {
//	int length;
//	float array[Maxsize];
//}Stack, * StackP;
//
//StackP CreateStack(void);
//void InitStack(StackP s);
//void PushStack(StackP s, float num);
//void PopStack(StackP s, float* num);
//float calcula(float* s2, StackP stack1, StackP stack2);
//float oper(StackP stack1, StackP stack2);
//
//int main()
//{
//	char s1[100] = { 0 };
//	float s2[100] = { 0 };
//	StackP stack1=CreateStack();
//	StackP stack2 = CreateStack();
//	InitStack(stack1);
//	InitStack(stack2);
//
//	printf("Enter a formula:");
//
//	int i = 0,j=1,z=0;
//	int sum1 = 0;
//	scanf("%s", s1);
//	while (*(s1+i)!='\0')
//	{
//		if (*(s1 + i) == '+'|| *(s1 + i) == '-'|| *(s1 + i) == '*'|| *(s1 + i) =='/')
//		{
//			s2[z++] = sum1;
//			s2[z++] = *(s1 + i);
//			sum1 = 0;
//			j = 1;
//		}
//		else
//		{
//			sum1 *= j;
//			sum1 =sum1+ (*(s1 + i) -48);
//			j *= 10;
//		}
//		i++;
//	}
//	s2[z] = sum1;
//	
//
//	float sum=calcula(s2, stack1, stack2);
//
//	printf("Output:%f",sum);
//
//	return 0;
//}
//
//StackP CreateStack(void)
//{
//	StackP s = (StackP)malloc(sizeof(Stack));
//	assert(s != NULL);
//	return s;
//}
//void InitStack(StackP s)
//{
//	s->length = -1;
//	int i = 0;
//	for (i = 0; i < Maxsize; i++)
//	{
//		s->array[i] = 0;
//	}
//}
//void PushStack(StackP s, float num)
//{
//	if (s->length >= Maxsize - 1)
//	{
//		printf("Error,the stack is full!\n");
//	}
//	else
//	{
//		s->array[++s->length] = num;
//	}
//}
//void PopStack(StackP s, float* num)
//{
//	if (s->length <= -1)
//	{
//		*num = 0;
//	}
//	else
//	{
//		*num = s->array[s->length--];
//	}
//}
//
//float calcula(float *s1, StackP stack1, StackP stack2)
//{
//	float sum;
//	int i = 0;
//	while (*(s1 + i) != 0)
//	{
//		if (*(s1 + i) != '+' && *(s1 + i) != '-' && *(s1 + i) != '*' && *(s1 + i) != '/')
//		{
//			PushStack(stack2, *(s1 + i));
//		}
//		else
//		{
//			if (stack1->length <= -1);
//			else if ((*(s1 + i) == '*' || *(s1 + i) == '/'))
//			{
//				while (stack1->array[stack1->length] == '*' || stack1->array[stack1->length] == '/')
//				{
//					float sym;
//					float num1, num2;
//					float sum = 0;
//					PopStack(stack2, &num2);
//					PopStack(stack2, &num1);
//					PopStack(stack1, &sym);
//					if ( sym== '*')
//					{
//						sum = num1 * num2;
//					}
//					if(sym == '/')
//					{
//						sum = num1 / num2;
//					}
//					PushStack(stack2, sum);
//				}
//			}
//			else if ((*(s1 + i) == '+' || *(s1 + i) == '-'))
//			{
//				sum = oper(stack1, stack2);
//			}
//			PushStack(stack1, *(s1 + i));
//		}
//		i++;
//	}
//	if (stack1->length > -1)
//	{
//		sum=oper(stack1, stack2);
//	}
//	return sum;
//}
//
//float oper(StackP stack1, StackP stack2)
//{
//	float sym;
//	float num1, num2;
//	float sum = 0;
//	PopStack(stack1, &sym);
//	while (sym !=0)
//	{
//		PopStack(stack2, &num2);
//		PopStack(stack2, &num1);
//		if (sym == '+')
//		{
//			sum = num1 + num2;
//		}
//		else if (sym == '-')
//		{
//			sum = num1 - num2;
//		}
//		else if (sym == '*')
//		{
//			sum = num1 * num2;
//		}
//		else
//		{
//			sum = num1 / num2;
//		}
//		PushStack(stack2, sum);
//		PopStack(stack1, &sym);
//	}
//	return sum;
//}

//void calculatestring(char* s, int* shortest);
//
//int main()
//{
//	int count = 0 , shortest=0;
//	char s1[100] = { 0 };
//	char s2[100][100] = {0};
//	printf("Enter the number of strings(N):");
//	scanf("%d", &count);
//
//	int j = 0;
//	while (count--)
//	{
//		printf("Enter a string:");
//		getchar();
//		gets(s1);
//		int i = 0;
//		while (*(s1 + i) != '\0')
//		{
//			if (*(s1 + i) == '#')
//			{
//				int z = 0;
//				i++;
//				while (*(s1 + i) != '#'&& *(s1 + i) != '\0')
//				{
//					s2[j][z] = *(s1 + i);
//					i++;
//					z++;
//				}
//				j++;
//			}
//			if (*(s1 + i) != '\0'&& *(s1 + i) != '#')
//			{
//				i++;
//			}
//		}
//	}
//
//	int flag = 0;
//	for (j = 0; s2[j+1][0] != '\0'; j++)
//	{
//		if (strlen(s2 + flag) > strlen(s2 + j + 1))
//		{
//			flag = j + 1;
//		}
//		else
//		{
//			flag = flag;
//		}
//	}
//
//	printf("Shortest hashtag:           #%s", s2 + flag);
//	return 0;
//}

//void sort(char s2[], char a);
//
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[26] = { 0 };
//	printf("Enter a string:");
//	scanf("%s", s1);
//
//	int i = 0;
//	while (*(s1 + i) != '\0')
//	{
//		if (*(s1 + i) <= 'Z' && 'A' <= *(s1 + i))
//		{
//			sort(s2, *(s1 + i));
//		}
//		i++;
//	}
//
//	printf("Upper-case letters:%s",s2);
//
//	return 0;
//}
//
//
//void sort(char s2[], char a)
//{
//	int i = 0,len=0;
//	if (*(s2) == '\0')
//	{
//		*(s2) = a;
//	}
//	else
//	{
//		len = strlen(s2);
//		while (*(s2 + i)!='\0'&& *(s2 + i) < a)
//		{
//			i++;
//		}
//		if (*(s2 + i) != a)
//		{
//			while (i<=len-1)
//			{
//				*(s2 + len) = *(s2 + len-1);
//				len--;
//			}
//			*(s2 + i) = a;
//		}
//	}
//}

//int count(char s1[], char s2[]);
//
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	printf("Enter the first string:");
//	gets(s1);
//	printf("Enter the second string:");
//	gets(s2);
//
//	
//	printf("Occurrence: %d", count(s1, s2));
//
//	return 0;
//}
//
//
//int count(char s1[], char s2[])
//{
//	int i = 0,count=0;
//	while (*(s1 + i) != '\0')
//	{
//		int j = 0;
//		while (*(s1 + i) == *(s2 + j) && *(s1 + i) != '\0' && *(s2 + j) != '\0')
//		{
//			i++;
//			j++;
//		}
//		if (*(s2 + j) == '\0')
//		{
//			count++;
//		}
//		if (*(s1 + i) != *(s2)&& *(s2 + j) != '\0')
//		{
//			i++;
//		}
//
//	}
//	return count;
//}

//void pushfirst(char sfirst[], char slast[], char s1[]);
//
//int main()
//{
//	char s1[20] = { 0 };
//	char sfirst[20] = { 0 };
//	char slast[20] = { 0 };
//	do
//	{
//		printf("Enter words:");
//		scanf("%s", &s1);
//		pushfirst(sfirst,slast,s1);
//
//	} while (strlen(s1) != 4);
//
//	printf("Smallest word:%s\n", sfirst);
//	printf("Largest word:%s\n", slast);
//
//	return 0;
//}
//
//
//void pushfirst(char sfirst[],char slast[], char s1[])
//{
//	int i = 0;
//	if (*(sfirst + i) == '\0' && *(slast + i) == '\0')
//	{
//		strcpy(sfirst, s1);
//		strcpy(slast, s1);
//	}
//	else
//	{
//		while (*(s1 + i) != '\0' && *(sfirst + i) != '\0')
//		{
//			if (*(s1 + i) < *(sfirst + i))
//			{
//				strcpy(sfirst, s1);
//				break;
//			}
//			else if (*(s1 + i) > *(sfirst + i))
//			{
//				break;
//			}
//			i++;
//		}
//		if (*(s1 + i) == '\0' && *(sfirst + i) != '\0')
//		{
//			strcpy(sfirst, s1);
//		}
//		i = 0;
//		while (*(s1 + i) != '\0' && *(slast + i) != '\0')
//		{
//			if (*(s1 + i) > *(slast + i))
//			{
//				strcpy(slast, s1);
//				break;
//			}
//			else if (*(s1 + i) < *(slast + i))
//			{
//				break;
//			}
//			i++;
//		}
//		if (*(s1 + i) != '\0' && *(slast + i) == '\0')
//		{
//			strcpy(slast, s1);
//		}
//	}
//	
//}

/* strncmp example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[][5] = { "R2D2" , "C3PO" , "R2a6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n < 3; n++)
//		if (strncmp(str[n], "R2",4) > 0)
//		{
//			printf("found %s\n", str[n]);
//		}
//	return 0;
//}