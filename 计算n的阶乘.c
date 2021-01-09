#include <stdio.h>

int main()
{
    int n = 0;
    int i = 1;
    int cheng = 1;
    printf("请输入数字，我们会帮你计算出该数字的阶乘");
    scanf("%d",&n);
    for(i = 1;n>=i; i++)
    {
        cheng *= i;
    }
    printf("%d的阶乘为%d\n",n,cheng);
    return 0;
}
