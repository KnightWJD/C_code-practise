 // 写一个递归函数,DigitSum(n) 输入一个非负整数,返回组成它的数字之和
 // 例如 调用DigitSum(1729) 则应该返回 1+7+2+9 它的和是19
 // 输入1729 输出 19


#include <stdio.h>



int DigitSum(unsigned int n)
{
    if(n>=1)
    {
        int a = 0;
        int b = 0;
        b = n%10;
        a += b;
        n = n/10;
        return a+DigitSum(n);
    }

}

int main()
{
    unsigned int a = 0; //unsigned : 题目要求是非负整数
    scanf("%d",&a);
    int b = DigitSum(a);
    printf("%d\n",b);

    return 0;
}

