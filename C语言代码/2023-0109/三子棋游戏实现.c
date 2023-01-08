#include "三子棋游戏.h"

void attm(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}

}

void print(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if(j!=col-1)
				printf("|");
		}
		printf("\n");
		if (i != row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (j != col - 1)
					printf("---|");
				else
					printf("---");
			}
			printf("\n");
		}
	}
}

void player_move(char arr[ROW][COL],int row,int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走,请输入坐标");
		scanf("%d %d", &x, &y);
		if (0 < x && x<= row && 0 < y&& y<= col)
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				print(arr, ROW, COL);
				break;
			}
			else
			{
				printf("已经输入，请重新输入!\n");
			}
		}
		else
		{
			printf("输入有错误，请重新输入!\n");
		}
	}
}

void computer_move(char arr[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			print(arr, ROW, COL);
			break;
		}
	}

}

char is_win(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i<row; i++) 
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != ' ')
		{
			return arr[i][0];
		}
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != ' ')
		{
			return arr[1][i];
		}
	}
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != ' ')
	{
		return arr[1][1];
	}



	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 'c';
			}
		}
	}
	return 'q';
}
