 // 用一个函数求一个数中二进制1的个数_1

#include <stdio.h>
int count_BIN(int n)
{
    int count = 0;
    int i = 0;
    for(i=0;i<32;i++)
    {
        if(n&1 == 1)
        {
            count++;
        }
        n = n>>1;
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
