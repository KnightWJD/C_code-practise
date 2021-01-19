//题目名称：打印素数
//题目内容，打印100到200之间的素数
#include <stdio.h>
#include <math.h> //sqrt 的头文件
int main()
{

//素数的条件是：只能被1或者本身整除
    int a = 0;
    int b = 0;
    int c = 2;
    int count = 0;
    //偶数不可能是素数
    for(a=101,b=200;a<=b;a+=2,c=2)//sqrt开平方的数学库函数
//优化：i = a*b  a和b中至少有一个数字小于等于开平方i，如果在开平方i之前都没找到一个因子可以整除i，说明i是素数
    {
        while(c<=sqrt(a))
        {

            if(0 == a % c)
            {
                break;
            }
            c++;
        }
        if(c>sqrt(a))
        {
            count++;
            printf("%d\n",a);
        }

    }
    printf("\ncount = %d\n",count);
    return 0;
}
