 // 打印一个整数二进制中的奇数位和偶数位

#include <stdio.h>

void swap_odd_even(int a)
{
    int i=0;
    printf("奇数位:\n");
    for(i=30;i>=0;i-=2) //从第一位移到第31位要移30个位
    {
        printf("%d ",(a>>i)&1);

    }
    printf("\n");
    printf("偶数位:\n");
    for(i=31;i>=1;i-=2)
    {
        printf("%d ",(a>>i)&1);

    }
}

int main()
{
    int n = 0;
    printf("请输入一个数字\n");
    scanf("%d",&n);
    swap_odd_even(n);

    return 0;
}

