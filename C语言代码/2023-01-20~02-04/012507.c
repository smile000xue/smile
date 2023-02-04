#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//将一句话的单词进行倒置，标点不倒置。
//比如 I like beijing. 经过函数后变为：beijing. like I

void reverse(char* left,char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

//void reverse(char* left, char* right)
//{
//	char tmp = *left;
//	*left = *right;
//	*right = tmp;
//	while (left < right)
//	{
//		left++;
//		right--;
//		reverse(left, right);
//	}
//}

void change(char* p)
{
	char* p0 = p;
	while (*p)
	{
		if (*p == ' ')
		{
			reverse(p0, p-1);
			p0 = p+1;
		}
		
		p++;
	}
	reverse(p0, p-1);
}

int main()
{
	char arr[101] = {0};
	gets(arr);
	int len = strlen(arr);
	

	reverse(arr,arr+len-1);

	/*change(arr);*/

	printf("%s", arr);
	

	return 0;
}