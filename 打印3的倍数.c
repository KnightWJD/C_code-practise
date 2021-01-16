//题目名称：打印3的倍数
//题目内容：写一个代码打印1-100所有3的倍数的数字

#include <stdio.h>


int main()
{
    int a = 0;
    for(a=0;a<=100;a++)
    {
        if(0 == a%3)
        {
            printf("%d\n",a);
        }

    }
    return 0;
}
