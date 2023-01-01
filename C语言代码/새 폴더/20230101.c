#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("******************************\n");
	printf("******  play: enter:1   ******\n");
	printf("******  exit：enter:0   ******\n");
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
		printf("第%d次\n",sum);
		printf("请输入你猜的1-1000的数字:");
		scanf("%d", &input);
		if (input < random_num)
		{
			printf("猜小了\n");
			printf("\n");
		}
		else if (input > random_num)
		{
			printf("猜大了\n");
			printf("\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
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
		printf("请输入:");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("            开始游戏           \n");
			game();
			printf("是否继续游戏，继续请按1\n");
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误！！！请重新输入\n");
			printf("\n");
			break;

		}
	
	} while (input);

	return 0;
}