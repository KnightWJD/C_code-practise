 // 用一个函数求一个数中二进制1的个数_2

#include <stdio.h>
int count_BIN(unsigned int n) //unsigned :变成无符号数
{
    int count = 0;
    while(n)
    {
        if(n%2 == 1)
        {
            count++;
        }
        n = n/2;
    }
    return count;
}

int main()
{
    int a = 0;
    printf("请输入一个数字\n");
    scanf("%d",&a);
    int count = count_BIN(a);
    printf("该数字二进制中1的个数为 %d\n",count);
    return 0;
}

