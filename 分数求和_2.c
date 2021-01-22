//题目名称：分数求和
//题目内容：计算 1/1-1/2+1/3-1/4+1/5......+1/99-1/100的值，打印出结果
#include <stdio.h>

int main()
{
    double a = 0;
    int b = 0;
    for(a=1,b=1;a<=100;a++)
    {
        a += 1/a;
        b = -b;
    }
    printf("%f\n",a);
    return 0;
}
