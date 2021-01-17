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
    if(a>b)
    {
        for(c=b;c<=b && c>0;c--)
        {
            if((b % c == 0) && (a % c == 0))
               {
                   printf("最大公约数为%d\n",c);
                   break;
               }

        }
        printf("最大公约数为%d\n",c);
    }
    else if(b>a)
    {
        for(c=a;c<=a && c>0;c--)
        {
            if((b % c == 0) && (a % c == 0))
               {
                   printf("最大公约数为%d\n",c);
                   break;
               }
        }
    }
    else
    {
        printf("最大公约数为%d\n",a);
    }
    return 0;
}
