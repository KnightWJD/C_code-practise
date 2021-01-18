//题目名称：打印素数
//题目内容，打印100到200之间的素数
#include <stdio.h>

int main()
{

//素数的条件是：只能被1或者本身整除
    int a = 0;
    int b = 0;
    int c = 2;
    int d = 0;
    for(a=100,b=200;a<=b;a++,c=2)
    {
        while(c<a)
        {
            c++;
            if((0 == a % c))
            {
                break;
            }
        }
        if(c==a)// 如果c等于a是，说明没有一个可以被整除，就是素数
        {
            printf("%d\n",a);
        }

    }
    return 0;
}
