#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void read_word(int words[26])
//{
//	int a = 0;
//	while ((a = getchar()) != '\n')
//	{
//		words[a - 97]++;
//	}
//}
//int is_anagrams(int words1[26], int words2[26])
//{
//	int i = 0;
//	while (i<26)
//	{
//		if (words1[i] != words2[i])
//		{
//			return 0;
//		}
//		i++;
//	}
//	return 1;
//}
//int main()
//{
//	int words1[26] = { 0 };
//	int words2[26] = { 0 };
//
//	printf("Enter first word:");
//	read_word(words1);
//
//	printf("Enter second word:");
//	read_word(words2);
//
//	int flag = is_anagrams(words1, words2);
//
//	if (flag == 1)
//	{
//		printf("The two words are anagrams.");
//	}
//	else
//	{
//		printf("The two words are not anagrams.");
//	}
//
//	return 0;
//}

//int med(int A, int B, int C)
//{
//	//if (A > B&&A<C)//BAC
//	//{
//	//	printf("%d  ", A);
//	//	return A;
//	//} 
//	//if (A > B && B > C)//CBA
//	//{
//	//	printf("%d  ", B);
//	//	return B;
//	//}
//	//if (B > C &&  C> A)//ACB
//	//{
//	//	printf("%d  ", C);
//	//	return C;
//	//}
//	//if (A > C && B < C)//BCA
//	//{
//	//	printf("%d  ", C);
//	//	return C;
//	//}
//	//if (B > A && A> C)//CAB
//	//{
//	//	printf("%d  ", A);
//	//	return A;
//	//}
//	//if (B > A && C > B)//ABC
//	//{
//	//	printf("%d  ", B);
//	//	return B;
//	//}
//	int min = A > B ? B : A;
//	int max = A > B ? A : B;
//	int med = min > C ? min : C;
//	med = max > med?med:max;
//	return med;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int num=0;
//	int i = 0;
//	printf("Enter 10 positive numbers:");
//	while (i < 10)
//	{
//		scanf("%d", &num);
//		if (num> 0)
//		{
//			arr[i] = num;
//			i++;
//		}
//	}
//	printf("Median of each triplet:");
//	int j = 0;
//	for (j = 0; j < i-2; j++)
//	{
//		printf("%d  ", med(arr[j], arr[j + 1], arr[j + 2]));
//	}
//
//	return 0;
//}

//char decrypt(char ch, int k)
//{
//	if (('a' <= ch&&ch <= 'z')|| ('A' <= ch && ch <= 'Z'))
//	{
//		if ((ch - k < 'a' && 'Z' < ch - k) ||(ch - k < 'A'))
//		{
//			return ch - k + 26;
//		}
//		else
//		{
//			return ch - k;
//		}
//	}
//	else
//	{
//		return ch;
//	}
//	
//}
//int main()
//{
//	char arr[11] = { 0 };
//	int i = 0,k=0;
//
//	printf("Encrypted code:");
//	scanf("%s", arr);
//	printf("K:");
//	scanf("%d", &k);
//
//	printf("Decrypted code:");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c", decrypt(arr[i], k));
//	}
//
//	return 0;
//}

/*
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
int main()
{
	int a, b, c,sum;
	printf("Enter two numbers and type of operation:");
	scanf("%d %d %d", &a, &b, &c);

	switch (c)
	{
	case 1:sum=add(a, b); break;
	case 2:sum = sub(a, b); break;
	case 3:sum = mul(a, b); break;
	case 4:sum = div(a, b); break;
	default:printf("Error!"); break;
	}

	printf("Results of addition:%d",sum);


	return 0;
}*/

/*int maxn(int a, int b)
{
	return a > b ? a : b;
}
int minm(int a, int b)
{
	return a > b ? b : a;
}
int main()
{
	int arr[10] = { 0 };

	printf("Enter 10 numbers:");
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	int max=arr[0], min = arr[0];
	for (i = 1; i < 10; i++)
	{
		max = maxn(arr[i], max);
		min = minm(arr[i], min);
	}

	printf("Difference in Max and Min: %d",max - min);

	return 0;
}*/

//int polynomial(int x)
//{
//	return 2 * x * x - 8 * x * x * x + 3 * x * x * x * x - 6 * x + 2 * x * x * x * x * x - 3;
//}
//int main()
//{
//	int x=0;
//	printf("Enter x:");
//	scanf("%d", &x);
//	printf("Results:%d", polynomial(x));
//	return 0;
//}


//int main()
//{
//	//int a[10] = { 0 };
//	//int* p1[10];
//	//p1[0] = &a[0];
//	//p1[1] = &a[1];
//	//char b[10] = { 0 };
//	//char* l1[10];
//	//l1[0] = &b[0];
//	//l1[1] = &b[1];
//	//printf("%d %d", p1[1] - p1[0], l1[1] - l1[0]);
//	//int i = 0;
//	//a[i++] = 3;
//	//int* p = a;
//	//*p++ = 3;
//	//printf("%d %d", a[0], a[1]);
//
//
//	int a[10][10] = {0};
//	int* p = a;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		*(p + i) = i;
//	}
//	i = 0;
//	/*for (p = &a[0][0]; p <= &a[9][9]; p++)
//	{
//		*p = 0;
//	}*/
//
//	/*for (p = a[0]; p < a[10]; p++)
//	{
//		*p = 0;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("     %d    ", a[i][j]);
//		}
//		printf("\n");
//	}*/
//
//	/*char* planets[] = { "Mercury", "Venus", "Earth",
//"Mars", "Jupiter", "Saturn",
//"Uranus", "Neptune", "Pluto" };*/
//
//	char planets[][8] = { "Mercury", "Venus", "Earth",
//"Mars", "Jupiter", "Saturn",
//"Uranus", "Neptune", "Pluto" };
//
//	planets[1][0] = 'n';
//
//	printf("%s", planets[1]);
//
//	return 0;
//}



/* Prints a one-month reminder list (dynamic string version) */
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_REMIND 50 /* maximum number of reminders */
//#define MSG_LEN 60 /* max length of reminder message */
//int read_line(char str[], int n);
//
//int main(void)
//{
//	char* reminders[MAX_REMIND];
//	char day_str[3], msg_str[MSG_LEN + 1];
//	int day, i, j, num_remind = 0;
//	for (;;) {
//		if (num_remind == MAX_REMIND) {
//			printf("-- No space left --\n");
//			break;
//		}
//		printf("Enter day and reminder: ");
//		scanf("%2d", &day);
//		if (day == 0)
//			break;
//		sprintf(day_str, "%2d", day);
//		read_line(msg_str, MSG_LEN);
//		for (i = 0; i < num_remind; i++)
//			if (strcmp(day_str, reminders[i]) < 0)
//				break;
//		for (j = num_remind; j > i; j--)
//			reminders[j] = reminders[j - 1];
//		reminders[i] = malloc(2 + strlen(msg_str) + 1);
//		if (reminders[i] == NULL) {
//			printf("-- No space left --\n");
//			break;
//		}
//		strcpy(reminders[i], day_str);
//		strcat(reminders[i], msg_str);
//		num_remind++;
//	}
//	printf("\nDay Reminder\n");
//	for (i = 0; i < num_remind; i++)
//		printf(" %s\n", reminders[i]);
//	return 0;
//}
//int read_line(char str[], int n)
//{
//	int ch, i = 0;
//	while ((ch = getchar()) != '\n')
//		if (i < n)
//			str[i++] = ch;
//	str[i] = '\0';
//	return i;
//}


//typedef struct {
//	char* title;
//	int run_time;
//} MINFO;
//int main(void)
//{
//	MINFO* mp = NULL;
//	int i, n, len;
//	char temp[100]; // Maximum length of a movie title is 99
//	printf("Number of Movies: ");
//	scanf("%d", &n);
//	getchar();
//	mp = (MINFO*)malloc(n * sizeof(MINFO));
//	if (mp == NULL) {
//		printf("Error: Not Enough Memory\n");
//		return -1;
//	}
//	for (i = 0; i < n; i++) {
//		printf("Enter title: ");
//		gets(temp);
//		len = strlen(temp);
//		mp[i].title = (char*)malloc((len + 1) * sizeof(char));
//		if (mp[i].title == NULL) {
//			printf("Error: Not Enough Memory\n");
//			return -1;
//		}
//		strcpy(mp[i].title, temp);
//		printf("Enter running time: ");
//		scanf("%d", &mp[i].run_time);
//		getchar();
//	}
//	printf("Movie List\n");
//	for (i = 0; i < n; i++)
//		printf("%s %d min.\n", mp[i].title, mp[i].run_time);
//	for (i = 0; i < n; i++)
//		free(mp[i].title);
//	free(mp);
//	return 0;
//}
