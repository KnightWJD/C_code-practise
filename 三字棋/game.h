
#define row 3
#define column 3

#include <stdio.h>
#include <stdlib.h>

void init_board(char chessboard[row][column],int ROW,int COLUMN);//初始化的声明
void display_board(char chessboard[row][column],int ROW,int COLUMN);//打印棋盘的声明
void player_move(char chessboard[row][column],int ROW,int COLUMN); //玩家下棋的声明
void computer_move(char chessboard[row][column],int ROW,int COLUMN);//电脑下棋的声明


//四种游戏状态
//玩家赢 '*'
//电脑赢 '#'
//平局   'P'
//继续   'J'

char is_win(char chessboard[row][column],int ROW,int COLUMN);
