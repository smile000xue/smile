#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("******************************\n");
	printf("******  play: enter:1   ******\n");
	printf("******  exit��enter:0   ******\n");
	printf("******************************\n");
}

void game()
{
	int random_num = rand() % 1000 + 1;
	int input = 0;
	int sum = 0;

	while (5)
	{
		sum++;
		printf("��%d��\n",sum);
		printf("��������µ�1-1000������:");
		scanf("%d", &input);
		if (input < random_num)
		{
			printf("��С��\n");
			printf("\n");
		}
		else if (input > random_num)
		{
			printf("�´���\n");
			printf("\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!\n");
			printf("\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("������:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("            ��ʼ��Ϸ           \n");
			game();
			printf("�Ƿ������Ϸ�������밴1\n");
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("������󣡣�������������\n");
			printf("\n");
			break;

		}
	
	} while (input);

	return 0;
}