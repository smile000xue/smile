#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int str(char* p)
//{
//	int count=0;
//	while (*p != '\0')
//	{	
//		count++;
//		p++;
//	}
//	return count;
//
//
//}

int str(char* p)
{
	if (*p != '\0')
		return 1 + str(p + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "hello123";
	printf("%d", str(arr));
	return 0;
}