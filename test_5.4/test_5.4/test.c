#define  _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"

//扫雷游戏

void menu()
{
	printf("**********************************\n");
	printf("*****1. 开始游戏  2. 退出游戏*****\n");
	printf("**********************************\n");
}
void game()
{
	char ch[ROWS][COLS] = { 0 };//存放地雷信息
	char ch1[ROWS][COLS] = { 0 };//排查出来的地雷的信息
	//初始化
	InitBoard(ch, ROWS, COLS, '0');
	InitBoard(ch1, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(ch, ROW, COL);
	DisplayBoard(ch1, ROW, COL);
	//布置地雷
	SetCh(ch, ROW, COL);
	//DisplayBoard(ch, ROW, COL);
	//扫雷
	FindCh_Ch1(ch, ch1, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新输入\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}