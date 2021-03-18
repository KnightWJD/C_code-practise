//写一段代码,查看当前的字节序是多少

#include <stdio.h>

int check_sys()
{
    //返回1为小端,返回0为大端
    int a = 1;
    return *(char*)&a;
}

int main()
{
    int ret = check_sys();
    if(ret == 0)
    {
        printf("大端\n");
    }
    if(ret == 1)
    {
        printf("小端\n");
    }
    return 0;
}

