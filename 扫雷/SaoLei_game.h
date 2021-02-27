#include <stdio.h>
#include <stdlib.h>

#define ROW 9
#define COLUMN 9

#define Easy_count 10

#define ROW_plus ROW+2
#define COLUMN_plus COLUMN+2

void Init_board(char chessboard[ROW_plus][COLUMN_plus],int row_plus,int column_plus,char set);
void Display_board(char chessboard[ROW_plus][COLUMN_plus],int row,int column);
void Set_mine(char chessboard[ROW_plus][COLUMN_plus],int row,int column);
void Find_mine(char mine[ROW_plus][COLUMN_plus],char show[ROW_plus][COLUMN_plus],int row,int column);


