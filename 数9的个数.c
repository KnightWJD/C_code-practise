//题目名称：数9的个数
//题目内容:编写程序数一下1到100的所有整数中出现了多少个数字9
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 90;
    int count1 = 0;
    int count2 = 0;
    for(a=1,b=100;a<=b;a++)
    {
        if(a<=10)
        {
            if(0 == a%9)
            {
                count1++;
                printf("%d ",a);
            }
            continue;
        }
        else
        {
            c = a-10;
            d = a;
            while(a>10 && a<90)
            {

                if(c<=10)
                {
                    if(0 == c%9)
                    {
                        count1++;
                        printf("%d ",a);

                    }
                    break;
                }
                c -= 10;
            }
             while(a>=90)
             {
                 if(a>90)
                 {
                    d -=1;
                    if((0 == d%9) && (0 == d%10))
                    {
                        count1++;
                        count2++;
                        if(count2 == 10)
                        {
                            break;
                        }
                        printf("%d ",a);
                        break;
                    }
                 }
                 else if((0 == d%9) && (0 == d%10))
                    {
                        count1++;
                        printf("%d ",a);
                        break;
                    }

             }

        }

    }
    printf("\ncount = %d\n",count1);
    return 0;
}
