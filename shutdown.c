//电脑关机
#include <stdio.h>

int main()
{
    char aa[20] = {0};
    system("shutdown -s -t 120");
gt:
    printf("您的电脑将在2分钟内关机，如果输入 123 可以关闭\n请输入>");
    scanf("%s",aa);
    if(strcmp(aa,"123") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto gt;
    }
    return 0;
}
