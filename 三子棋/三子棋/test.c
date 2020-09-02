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
		printf("���Ӯ\n");

	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ����� ");
		}
		
	}
	while (input);
}
int main()
{
	test();
	return 0;
}