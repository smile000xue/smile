#include "��������Ϸ.h"

void menu()
{
	printf("********** ��������Ϸ **********\n");
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
			printf("��ϲ�㣬��Ӯ��\n");
			break;
		}
		if (pan == 'q')
		{
			printf("ƽ��!\n");
			break;
		}

		computer_move(arr, ROW, COL);
		pan = is_win(arr, ROW, COL);
		if (pan == '#')
		{
			printf("����Ӯ�ˣ�������\n");
			break;
		}
		if (pan == 'q')
		{
			printf("ƽ��\n");
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
		printf("������>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(arr,ROW,COL);
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("�����������������!!!\n\n");
			break;
		}

	} while(input);

	return 0;
}