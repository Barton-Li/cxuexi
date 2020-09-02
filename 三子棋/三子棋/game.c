# include "game.h"

void playmove(char board[row][col], int ow, int ol)
{
	int x = 0;
	int y = 0;
	printf("玩家走：>\n");
	while (1)
	{
		printf("请输入要下的坐标：\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ow && y >= 1 && y <= ol)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;

			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}
	}
}
void computermove(char board[row][col], int ow, int ol)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	x = rand() % ow;
	y = rand() % ol;
	while (1)
	{
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
void initboard(char board[row][col], int ow, int ol)
{
	int i = 0, j = 0;
	for (i = 0; i < ow; i++)
	{
		for (j = 0; j < ol; j++)
		{
			board[i][j] = ' ';

		}
	}
}
void displayboard(char board[row][col], int ow, int ol)
{
	int i = 0;
	for (i = 0; i < ow; i++)
	{
		int j = 0;
		for (j = 0; j < ol; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < ol - 1)
				printf("|");

		}
		printf("\n");
		if (i < ow - 1)
		{
			for (j = 0; j < ol; j++)
			{
				printf("---");
				if (j < ol - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

int isfull(char board[row][col], int ow, int ol)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ow; i++)
	{
		for (j = 0; j < ol; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}

				
		}
		return 1;
	}
}
char iswin(char board[row][col], int ow, int ol)
{
	int i = 0;
	if (board[i][1] == board[i][0] && board[i][1] == board[i][2] && board[i][1] != ' ')
	{
		return board[i][1];

	}
	if (board[1][i] == board[0][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
	{
		return board[1][i];
	}
	if (board[1][1] == board[0][0] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[1][1] == board[0][2] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (1 == isfull(board, ow, ol))
	{
		return 'Q';
	}
	return 'C';
}