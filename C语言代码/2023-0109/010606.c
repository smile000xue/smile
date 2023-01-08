#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//Title:Reverse string order(recursive implementation)

//The first way

//void reverse_string(char arr[], int n)
//{
//	int i = 0;
//	char tem='0';
//	for (i = 0; i < n/2; i++)
//	{
//		tem = arr[i];
//		arr[i] = arr[n - i - 1];
//		arr[n - 1 - i] = tem;
//
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd0123";
//	int n = sizeof(arr) / sizeof(arr[0])-1;
//
//	reverse_string(arr, n);
//	
//	printf("%s", arr);
//
//
//	return 0;
//}

//The second way

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr)-1;
//	while (left < right)
//	{
//		char tmp = arr[left];//char tmp=*(arr+left)
//		arr[left]=arr[right];//*(arr+left)=*(arr+right);
//		arr[right]=tmp;//*(arr+right)=tmp;
//		left++;
//		right--;
//	}
//
//
//}
//
//int main()
//{
//	char arr[] = "abcdrf123";
//
//	reverse_string(arr);
//
//	printf("%s", arr);
//
//	return 0;
//}

//The third way

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	char tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[right] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef123405";
//
//	reverse_string(arr);
//
//	printf("%s", arr);
//
//	return 0;
//}

