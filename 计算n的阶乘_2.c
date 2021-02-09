//求n的阶乘，自定义函数，递归
#include <stdio.h>

int jc(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else if(x>1)
    {
        return x*jc(x-1);
    }
}
int main()
{
    int a = 0;
    scanf("%d",&a);
    printf("%d",jc(a));
    return 0;
}
