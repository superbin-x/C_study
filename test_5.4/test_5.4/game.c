#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//初始化
void InitBoard(char ch[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			ch[i][j] = set;
		}
	}
}
//打印棋盘
void DisplayBoard(char ch[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
		if (0 == i)
		{
			printf(" ");
		}
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("—");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d |", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", ch[i][j]);
		}

		printf("\n");
	}
}
//设置地雷
void SetCh(char ch[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;
		if (ch[x][y] == '0')
		{
			ch[x][y] = '1';
			count--;
		}
	}
}


//计算地雷
int Get_Ch_Count(char ch[ROWS][COLS], int x, int y)
{
	int count = 0;
	count = (ch[x - 1][y - 1] + ch[x][y - 1] + ch[x + 1][y - 1]
		+ ch[x + 1][y] + ch[x + 1][y + 1] + ch[x][y + 1]
		+ ch[x - 1][y + 1] + ch[x - 1][y]) - 8 * '0';
	return count;
}


//扫雷
void FindCh_Ch1(char ch[ROWS][COLS], char ch1[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<(row*col-EASY_COUNT))
	{
		printf("输入扫雷坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (ch[x][y] == '1')//踩雷
			{
				printf("失败!\n");
				DisplayBoard(ch, row, col);
				break;
			}
			else
			{
				int count = Get_Ch_Count(ch, x, y);//计算坐标（x,y）周围几个地雷
				ch1[x][y] = count + '0';
				DisplayBoard(ch1, row, col);
				win++;
			}
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (win == (row*col - EASY_COUNT))
	{
		printf("胜利！\n");
		DisplayBoard(ch1, row, col);
	}
}


//展开功能：递归



