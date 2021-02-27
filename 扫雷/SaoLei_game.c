
#include "SaoLei_game.h"

void Init_board(char chessboard[ROW_plus][COLUMN_plus],int row_plus,int column_plus,char set)
{
    int i = 0;
    for(i=0;i<row_plus;i++)
    {
        int j = 0;
        for(j=0;j<column_plus;j++)
        {
            chessboard[i][j] = set;
        }
    }
}

void Display_board(char chessboard[ROW_plus][COLUMN_plus],int row,int column)
{
    int i = 0;
    int j = 0;
    //打印行号
    for(i=0;i<=row;i++)
    {
        printf("%d ",i);
    }

    printf("\n");

    for(i=1;i<=row;i++)
    {
        printf("%d ",i); //打印列号
        for(j=1;j<=column;j++)
        {
            printf("%c ",chessboard[i][j]);
        }
        printf("\n");
    }
}

void Set_mine(char chessboard[ROW_plus][COLUMN_plus],int row,int column)
{
    int count = 0;
    count = Easy_count;
    while(count)
    {
        int x = rand() % row +1; // 1-9
        int y = rand() % column +1;
        if(chessboard[x][y] == '0')
        {
            chessboard[x][y] = '1';
            count--;
        }

    }
}

int Get_mine_count(char mine[ROW_plus][COLUMN_plus],int x,int y)
{
    return mine[x-1][y]+
    mine[x-1][y-1]+
    mine[x][y-1]+
    mine[x+1][y-1]+
    mine[x+1][y]+
    mine[x+1][y+1]+
    mine[x][y+1]+
    mine[x-1][y+1] - 8*'0';
}



void Find_mine(char mine[ROW_plus][COLUMN_plus],char show[ROW_plus][COLUMN_plus],int row,int column)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while(win < row*column-Easy_count)
    {
        printf("请输入排查的坐标>");
        scanf("%d%d",&x,&y);
        //判断坐标合法性
        if(x>=1 && x<=row && y>=1 && y<=column)
        {
            //踩雷
            if(mine[x][y] == '1')
            {
                printf("很遗憾，你被炸死了\n");
                Display_board(mine,row,column);
            }
            //不是雷
            else
            {
                //计算x,y周围有几个雷
                int count = 0;
                count = Get_mine_count(mine,x,y);
                show[x][y] = count + '0'; //将数字转换为字符
                Display_board(show,row,column);
                win++;
            }
        }
        else
        {
            printf("该坐标非法,请重新输入\n");
        }
    }
    if(win == row*column-Easy_count)
    {
        printf("恭喜你排雷成功\n");
        Display_board(mine,row,column);
    }

}
