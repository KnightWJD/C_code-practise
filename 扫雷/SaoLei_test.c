
#include "SaoLei_game.h"

void game()
{
    //雷的信息储存
    //1.布置好的雷的信息
    char mine[ROW_plus][COLUMN_plus] = {0}; //11 X 11


    //2.排查出的雷的信息
    char show[ROW_plus][COLUMN_plus] = {0};

    //初始化
    Init_board(mine,ROW_plus,COLUMN_plus,'0');
    Init_board(show,ROW_plus,COLUMN_plus,'*');

    //打印棋盘
//    Display_board(mine,ROW,COLUMN);
    Display_board(show,ROW,COLUMN);
    //布置雷
    Set_mine(mine,ROW,COLUMN);

    //扫雷
    Find_mine(mine,show,ROW,COLUMN);

}

void menu()
{
    printf("**************************************************\n");
    printf("***************       1.play           ***********\n");
    printf("***************       0.exit           ***********\n");
    printf("**************************************************\n");
}

void test()
{
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        menu();
        printf("请选择>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
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
