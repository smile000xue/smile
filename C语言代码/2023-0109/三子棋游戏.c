#include "三子棋游戏.h"

void menu()
{
	printf("********** 三子棋游戏 **********\n");
	printf("**********   1.play   **********\n");
	printf("**********   0.exit   **********\n");
	printf("********************************\n");
}

void game(char arr[ROW][COL],int row,int col)
{
	attm(arr,ROW,COL);

	print(arr,ROW,COL);
	char pan;
	while (1)
	{
		player_move(arr, ROW, COL);
		pan=is_win(arr, ROW, COL);
		if (pan == '*')
		{
			printf("恭喜你，你赢了\n");
			break;
		}
		if (pan == 'q')
		{
			printf("平局!\n");
			break;
		}

		computer_move(arr, ROW, COL);
		pan = is_win(arr, ROW, COL);
		if (pan == '#')
		{
			printf("电脑赢了，你输了\n");
			break;
		}
		if (pan == 'q')
		{
			printf("平局\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int) time(NULL));
	int input=0;
	
	do
	{
		menu();
		printf("请输入>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(arr,ROW,COL);
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误，请重新输入!!!\n\n");
			break;
		}

	} while(input);

	return 0;
}