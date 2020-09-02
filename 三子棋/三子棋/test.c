# include "game.h"

void menu()
{
    printf("********************************\n");
	printf("********************************\n");
	printf("*******1.play    0.exit*********\n");
	printf("********************************\n");
	printf("********************************\n");

}

void game()
{
	char board[row][col] = {0};
	char ret = 0;
	initboard(board, row, col);
	displayboard(board,row,col);
	while (1)
	{
		playmove(board, row, col);
		displayboard(board, row, col);
		ret=iswin(board, row, col);
		if (ret != 'C')
		{
			break;
		}
		computermove(board, row, col);
		displayboard(board, row, col);
		ret = iswin(board, row, col);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");

	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误！ ");
		}
		
	}
	while (input);
}
int main()
{
	test();
	return 0;
}