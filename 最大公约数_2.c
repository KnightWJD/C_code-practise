//题目名称：最大公约数
//题目内容，给定两个数，求这两个数的最大公约数
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("请输入两个数");
    scanf("%d%d",&a,&b);
    while(a%b != 0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    printf("这两个数的最大公约数为%d\n",b);
    return 0;
}
