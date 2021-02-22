
#include "game.h"

//初始化的实现
void init_board(char chessboard[row][column],int ROW,int COLUMN)
{
    int a = 0;
    int b = 0;
    for(a = 0;a<ROW;a++)
    {
        for(b=0;b<COLUMN;b++)
        {
            chessboard[a][b] = ' ';
        }
    }
}

//打印棋盘的实现
void display_board(char chessboard[row][column],int ROW,int COLUMN)
{
    int a = 0;
    int b = 0;
    for(a=0;a<ROW;a++)
    {
        //1.打印一行的数据
        for(b=0;b<COLUMN;b++)
        {
            printf(" %c ",chessboard[a][b]);
            if(b<COLUMN-1)
            {
                printf("|");
            }
        }
        printf("\n");

        //2.打印分割行
        if(a < ROW-1)
        {
            for(b=0;b<COLUMN;b++)
            {
                printf("---");
                if(b<COLUMN-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }

    }
}

//玩家下棋的实现
void player_move(char chessboard[row][column],int ROW,int COLUMN)
{
    int x = 0;
    int y = 0;
    printf("玩家回合\n");
    while(1)
    {
        printf("请输入坐标>");
        scanf("%d%d",&x,&y);
        //判断x，y的合法性
        if(x >= 1 && x <= ROW && y >= 1 && y <= COLUMN )
        {
            if(chessboard[x-1][y-1] == ' ')
            {
                chessboard[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("该坐标被占用,请重新输入\n");
            }
        }
        else
        {
            printf("坐标非法，请重新输入\n");
        }
    }

}

//电脑下棋的实现
void computer_move(char chessboard[row][column],int ROW,int COLUMN)
{
    int x = 0;
    int y = 0;
    printf("电脑回合\n");

    while(1)
    {
        x = rand() % ROW;
        y = rand() % COLUMN;
        if(chessboard[x][y] == ' ')
        {
            chessboard[x][y] = '#';
            break;
        }
    }
}

//返回1 表示棋盘满了
//返回0 表示棋盘没满

int is_full(char chessboard[row][column],int ROW,int COLUMN)
{
    int i = 0;
    int j = 0;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COLUMN;j++)
        {
            if(chessboard[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char is_win(char chessboard[row][column],int ROW,int COLUMN)
{
    int i = 0;
    //横三行
    for(i=0;i<=ROW;i++)
    {
        if(chessboard[i][0] == chessboard[i][1] && chessboard[i][1] == chessboard[i][2] && chessboard[i][1] != ' ')
        {
            return chessboard[i][1];
        }
    }

    //竖三列
    for(i=0;i<=COLUMN;i++)
    {
        if(chessboard[0][1] == chessboard[1][i] && chessboard[1][i] == chessboard[2][i] && chessboard[1][i] != ' ')
        {
            return chessboard[1][i];
        }
    }

    //右斜
    if(chessboard[0][0] == chessboard[1][1] && chessboard[1][1] == chessboard[2][2] && chessboard[1][1] != ' ')
    {
        return chessboard[1][1];
    }

    //左斜
    if(chessboard[2][0] == chessboard[1][1] && chessboard[1][1] == chessboard[0][2] && chessboard[1][1] != ' ')
    {
        return chessboard[1][1];
    }

    //判断是否为平局
    if(1 == is_full(chessboard,ROW,COLUMN))
    {
        return 'P';
    }
    else
    {
        return 'J';
    }

}
