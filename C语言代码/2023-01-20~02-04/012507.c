#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//��һ�仰�ĵ��ʽ��е��ã���㲻���á�
//���� I like beijing. �����������Ϊ��beijing. like I

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