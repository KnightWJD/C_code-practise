 // 两个int(32位)整数m和n的二进制表达中,有多少个位(bit)不同


#include <stdio.h>

int count_yi(int a,int b)
{
    int count = 0;
    int c = a^b;
    while(c)
    {
        c = c&(c-1);
        count++;
    }
    return count;
}

int main()
{
    int m = 0;
    int n = 0;
    printf("请输入两个数字\n");
    scanf("%d%d",&m,&n);
    int count = count_yi(m,n);
    printf("%d\n",count);
    return 0;
}

