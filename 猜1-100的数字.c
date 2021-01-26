//猜1-100的数字
#include <stdio.h>
#include <stdlib.h> // rand 和 srand 的头文件
#include <time.h>  // time 的 头文件
int game()
{
    printf("***********************\n");
    printf("*** 0:play  1:exit  ***\n");
    printf("***********************\n");
}

int play()
{
    int b = 0;
    int c = 0;
    b = rand() % 100 + 1; //设置b的区间为1-100
    printf("请输入一个数(1-100)\n");
    while(1)
    {
        scanf("%d",&c);
        if(c > b)
        {
            printf("您猜的数字偏大，请继续猜\n");
        }
        else if(c < b)
        {
            printf("您猜的数字偏小，请继续猜\n");
        }
        else
        {
            printf("恭喜您猜对啦\n");
            break;
        }
    }

}

int main()
{
    int a = 0;
    srand(time(NULL)); //在main函数里就只设置一次生成起点
    do
    {
        game();
        scanf("%d",&a);
        switch(a)
        {
        case 1:
            printf("退出游戏成功\n");
            break;
        case 0:
            printf("\n开始游戏:\n");
            play();
            break;
        default:
            printf("输入错误\n");
            break;
        }

    }while(a == 0);
    return 0;
}
