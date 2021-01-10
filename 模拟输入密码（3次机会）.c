#include <stdio.h>

int main()
{
    char passwd[20] = {0};
    int i = 0;
    for(i=0;i<3;i++)
    {
        printf("请输入密码");
        scanf("%s",passwd);
        if(strcmp(passwd,"123456") == 0) // == 不能比较两个字符串是否相等,应该使用一个库函数-strcmp
        {
            printf("密码正确\n");
            break;
        }
        else
        {
            if(0==i)
            {
                printf("输入错误,您还剩2次机会\n");
            }
            else if(1==i)
            {
                printf("输入错误，您还剩1次机会\n");
            }
            else
            {
                printf("输入错误,您的机会已用完\n");
            }
        }
    }

    return 0;
}
