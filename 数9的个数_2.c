//题目名称：数9的个数
//题目内容:编写程序数一下1到100的所有整数中出现了多少个数字9
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 90;
    int count = 0;
    for(a=1;a<=100;a++)
    {
        if((9 == a%10) || (9 == a/10))
        {
            printf("%d ",a);
            count++;
        }
    }
    printf("count = %d\n",count);
    return 0;
}
