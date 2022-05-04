#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//空格初始化棋盘
void InitBoard(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			ch[i][j] = ' ';
		}
	}
}
//打印棋盘
/*   |   |   
  ---|---|---
     |   |   
  ---|---|---
     |   |     */ 
void DisplayBoard(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据和分隔列
		for (j = 0; j < col; j++)
		{
			printf(" %c ", ch[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}			
		}
		printf("\n");
		//打印分格行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			
		}
	}
}
//玩家下棋
void PlayerMove(char ch[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家…：\n");
	
	while (1)
	{
		printf("输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (ch[x - 1][y - 1] == ' ')
			{
				ch[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("已落子\n");
			}
		}
		else
		{
			printf("坐标错误，请重新输入！\n");
		}
	}
}
//电脑下棋
void ComputerMove(char ch[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑…：\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (ch[x][y] == ' ')
		{
			ch[x][y] = '#';
			break;
		}
	}
}
//平局
int IsFull(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (ch[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
//判断输赢：
char IsWin(char ch[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//行三
	for (i = 0; i < row; i++)
	{
		/*if (ch[i][0] == ch[i][1]&& ch[i][1] == ch[i][2]&& ch[i][1] != ' ')
		{
			return ch[i][0];
		}*/
		for (j = 0; j < col - 2; j++)
		{
			if (ch[i][j] == ch[i][j + 1] && ch[i][j + 1] == ch[i][j + 2] && ch[i][j + 1] != ' ')
			{
				return ch[i][j];
			}
		}
	}
	//列三
	for (j = 0; j < col; j++)
	{
		/*if (ch[0][j] == ch[1][j]&& ch[1][j]== ch[2][j]&& ch[1][j] !=' ')
		{
			return ch[0][j];
		}*/
		for (i = 0; i < row - 2; i++)
		{
			if (ch[i][j] == ch[i + 1][j] && ch[i + 1][j] == ch[i + 2][j] && ch[i + 1][j] != ' ')
			{
				return ch[i][j];
			}
		}
	}
	
	//对角
	/*if (ch[0][0] == ch[ 1][1]&& ch[1][1] == ch[2][2]&& ch[1][1] != ' ')
	{
		return ch[0][0];
	}*/
	for (i = 0; i < row-2; i++)
	{
		for (j = 0; j < col-2; j++)
		{
			if (ch[i][j] == ch[i + 1][j + 1] && ch[i + 1][j + 1] == ch[i + 2][j + 2] && ch[i + 1][j + 1] != ' ')
			{
				return ch[i][j];
			}
		}
	}
	//平局
	if (1 == IsFull(ch, ROW, COL))
	{
		return '$';
	}
	return 'c';
}
