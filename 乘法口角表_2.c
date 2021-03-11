 // 实现一个函数,打印乘法口诀表,口诀表的行数和列数自己指定
 //  如:输入9,输出9*9口诀表,输出12,输出12*12的乘法口诀表

#include <stdio.h>

void print_multiply_chart(int a)
{
    int i = 0;
    int j = 0;
    for(i=0;i<=a;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            printf("%d*%d = %-2d ",i,j,i*j);
        }
    }
}

int main()
{
    int a = 0;
    printf("请输入一个数字\n");
    scanf("%d",&a);
    print_multiply_chart(a);
    return 0;
}

