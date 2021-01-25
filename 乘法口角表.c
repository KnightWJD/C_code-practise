//题目名称：乘法口角表
//题目内容：在屏幕上输出9*9乘法口角表 ×
#include <stdio.h>


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    for(a=1;a<=9;a++)
    {
        b = 1;
        for(b=1;b<=a;b++)
        {
            c = a*b;
            printf("%d×%d=%-2d ",a,b,c); //%2d : 打印2位，不够2位用空格右对齐 %-2d：左对齐
        }
        printf("\n");
    }
    return 0;
}
