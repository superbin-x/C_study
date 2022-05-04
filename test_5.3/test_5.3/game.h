#define ROW 4
#define COL 4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char ch[ROW][COL], int row, int col); //初始化数组 函数声明
void DisplayBoard(char ch[ROW][COL], int row, int col);//打印棋盘
void PlayerMove(char ch[ROW][COL], int row, int col);//玩家下棋
void ComputerMove(char ch[ROW][COL], int row, int col);//电脑下棋
char IsWin(char ch[ROW][COL], int row, int col);//判断输赢