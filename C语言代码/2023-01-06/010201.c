#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");

	again:
	printf("你的电脑将在60秒内关机，如果输入“爸爸！”，则取消关机\n请输入：");
	scanf("%s", input);

	if (0 == strcmp(input, "爸爸！"))
	{
		system("shutdown -a");
	}
	else
		goto again;


	return 0;
}