

#include "game.h"

//游戏的整个算法实现
void game()
{
    char ret = 0;
    //数组：存放走出的棋盘的信息
    char chessboard[row][column] = {0};

    //初始化棋盘
    init_board(chessboard,row,column);

    //打印棋盘
    display_board(chessboard,row,column);

    //下棋
    while(1)
    {
        //玩家下棋
        player_move(chessboard,row,column);
        display_board(chessboard,row,column);
        //判断玩家是否赢
        ret = is_win(chessboard,row,column);
        if(ret != 'J')
        {
            break;
        }
        //电脑下棋
        computer_move(chessboard,row,column);
        display_board(chessboard,row,column);
        //判断电脑是否赢
        ret = is_win(chessboard,row,column);
        if(ret != 'J')
        {
            break;
        }
    }

    if(ret == '*')
    {
        printf("玩家获胜\n");
    }
    else if(ret == '#')
    {
        printf("电脑获胜\n");
    }
    else
    {
        printf("平局\n");
    }


}

void menu()
{
    printf("**********************\n");
    printf("*** 1.play 0.exit ****\n");
    printf("**********************\n");
}

void test()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("\n请选择>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            printf("开始游戏\n");
            game();
            break;
        case 0:
            printf("退出游戏成功\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    }while(input);

}

int main()
{
    test();
    return 0;
}
