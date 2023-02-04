#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

//模拟strlen函数的实现

//size_t是unsigned int

int my_strlen(const char* arr)
//{
//	assert(arr != NULL);assert(arr);
//	int count = 0;
//	while (*arr++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

{
	assert(arr != NULL);
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr + 1);
	}
	else
		return 0;
}

int main()
{
	char arr[] = "hello";
	int ret=my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}