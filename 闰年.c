//题目名称：打印闰年
//题目内容，打印1000到2000之间的闰年
#include <stdio.h>

int main()
{

//闰年的条件是：-：能被4整除，但不能被100整除的年份(例如2008是闰年，1900不是闰年)

//二:能被400整除的年份(例如2000年)也是闰年。



    int a = 0;
    int b = 0;
    for(a=1000,b=2000;a<=b;a+=4)
    {
        if((a % 4 == 0) && (a % 100 != 0))
        {
            printf("%d\n",a);
        }
        else if(a % 400 == 0)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}
