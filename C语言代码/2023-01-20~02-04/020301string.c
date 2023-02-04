#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//明解c语言 9-1

//int main()
//{
//	char str[] = "ABC\0DEF";
//
//	printf("字符串str为“%s”\n", str);
//
//	return 0;
//}

//明解c语言 9-2

//int main()
//{
//	char s[] = "ABC";
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		s[i] = 0;
//	}
//	printf("%s", s);
//
//	return 0;
//}

//明解c语言 9-3

//#define N 5
//
//int main()
//{
//	char s[5][20] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		printf("s[%d]=", i);
//		scanf("%s", s[i]);
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < 20; j++)
//		{
//			if (s[i][j] == '$')
//				count++;
//		}
//		if (count == 5)
//		{
//			count = i;
//			break;
//		}
//	}
//
//	int j = 0;
//	for (j = 0; j <i; j++)
//	{
//		printf("s[%d]=%s\n", j,s[j]);
//	}
//
//	return 0;
//}

//明解c语言 9-4

//void null_string(char s[],int sz)
//{
//	int i = 0;
//	while (sz--)
//	{
//		s[i] = '\0';
//		i++;
//	}
//}
//
//int main()
//{
//	char s[10] = "ABCD";
//
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	null_string(s,sz);
//
//	printf("%s", s);
//
//	return 0;
//}

//明解c语言 9-5

//int str_char(const char s[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] == 'c')
//			return i;
//	}
//	return -1;
//
//
//}
//
//int main()
//{
//	char s[100] = {0};
//	scanf("%s", s);
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	int ret=str_char(s, sz);
//
//	printf("%d", ret);
//
//	return 0;
//}

//明解c语言 9-6

//int str_chnum(const char s[], int sz)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (s[i] == 'c')
//			count++;
//			
//	}
//	return count;
//
//
//}
//
//int main()
//{
//	char s[100] = { 0 };
//	scanf("%s", s);
//	int sz = sizeof(s) / sizeof(s[0]);
//
//	int ret = str_chnum(s, sz);
//
//	printf("%d", ret);
//
//	return 0;
//}

//明解c语言 9-7

//void put_stringn(const char s[], int n)
//{
//	while (n--)
//	{
//		printf("%s", s);
//	}
//}
//
//int main()
//{
//	char s[100] = { 0 };
//	int n = 0;
//	scanf("%s %d", s, &n);
//
//	put_stringn(s,n);
//
//	return 0;
//}

//明解c语言 9-8

//void put_stringr(const char s[])
//{
//	int count = 0;
//	while(s[count])
//	{
//		count++;
//	}
//	while (count--)
//	{
//		printf("%c", s[count]);
//	}
//}
//
//int main()
//{
//	char s[100] = { 0 };
//	scanf("%s",s);
//
//	put_stringr(s);
//
//	return 0;
//}

//明解c语言 9-9

//void put_stringr(char s[])
//{
//	int count = 0;
//	while (s[count])
//	{
//		count++;
//	}
//	int left = 0;
//	int right = count - 1;
//	while (left < right)
//	{
//		char tmp = s[left];
//		s[left] = s[right];
//		s[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}

//int main()
//{
//	char s[100] = { 0 };
//	scanf("%s", s);
//
//	put_stringr(s);
//
//	printf("%s", s);
//
//	return 0;
//}

//明解c语言 9-10

//void del_digit(char s[])
//{
//	int i = 0;
//	while (s[i])
//	{
//		int a = i;
//		while (s[i] >= '0' && s[i]<='9')
//		{
//			i++;
//		}
//		if (s[i] == 0)
//		{
//			int j = 0;
//			for (j = a; j < i; j++)
//				s[j] = 0;
//		}
//		if (a != i)
//		{
//			char c = s[a];
//			s[a] = s[i];
//			s[i] = c;
//		}
//		i = a + 1;
//	}
//}

//int main()
//{
//	char s[100] = { 0 };
//	scanf("%s", s);
//
//	del_digit(s);
//	printf("%s", s);
//
//	return 0;
//}

//明解c语言 9-11

//#define N 5
//#define S 128
//
//int read(char s[][S],int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", s[i]);
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < S; j++)
//		{
//			if (s[i][j] == '$')
//				count++;
//		}
//		if (count == 5)
//			return i;
//	}
//}
//
//void put(const char s[][S],int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//
//		printf("s[%d]=%s\n",i, s[i]);
//	}
//}
//
//int main()
//{
//	char s[N][S] = { 0 };
//
//	int ret =read(s, N);
//
//	put(s, ret);
//
//	return 0;
//}


//明解c语言 9-12

//#include <string.h>
//
//#define N 1
//
//void rev_string(char s[][128], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int len = strlen(s[i]);
//		int left = 0;
//		int right = len - 1;
//		while (left < right)
//		{
//			char tmp = s[i][left];
//			s[i][left] = s[i][right];
//			s[i][right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//void read(char s[][128], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", s[i]);
//	}
//}
//
//void print(char s[][128], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", s[i]);
//	}
//}
//
//int main()
//{
//	char s[N][128] = { 0 };
//
//	read(s, N);
//
//	rev_string(s, N);
//
//	print(s, N);
//
//	return 0;
//}

//测试字符串的长度
//#include <string.h>
//
//int main()
//{
//	char s[20] ="abc0d\0a01";
//	scanf("%s", s);
//
//
//	int ret = strlen(s);
//	printf("%d", ret);
//
//	return 0;
//}


//初始化的字符串中的\0是0，即会作为结束标志

//但是输入的\0不会