#define ROW 9 
#define COL 9
#define ROWS ROW+2 //数组比扫雷范围大一圈
#define COLS COL+2
#define EASY_COUNT 10 //地雷个数

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InitBoard(char ch[ROWS][COLS], int rows, int cols, char set);//初始化
void DisplayBoard(char ch[ROWS][COLS], int rows, int cols);//打印棋盘
void SetCh(char ch[ROWS][COLS], int row, int col);//设置地雷
void FindCh_Ch1(char ch[ROWS][COLS], char ch1[ROWS][COLS], int row, int col);//扫雷
