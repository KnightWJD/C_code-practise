#include <stdio.h>
#include <math.h>

int ss(int* pa)
{
    int b = 0;
    for(b=2;b<sqrt(*pa);b++) //只试除到 开平方a就行了
    {
        if((*pa % b) == 0 )
        {
            return 1; //return 1 一执行函数直接结束
        }
    }
    return 0;
}
int main()
{
    int a = 0;
    for(a=100;a<=200;a++)
    {
        if(ss(&a) == 0)
        {
            printf("%d ",a);
        }
    }
    return 0;
}
