#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
	char input[10] = { 0 };
	system("shutdown -s -t 60");

	again:
	printf("��ĵ��Խ���60���ڹػ���������롰�ְ֣�������ȡ���ػ�\n�����룺");
	scanf("%s", input);

	if (0 == strcmp(input, "�ְ֣�"))
	{
		system("shutdown -a");
	}
	else
		goto again;


	return 0;
}