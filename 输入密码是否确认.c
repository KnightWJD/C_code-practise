#include <stdio.h>

int main()
{
    int ch =0;
    int h = 0;
    char passwd[20] = {0};
    printf("请输入密码");
    scanf("%s",passwd);

    while((ch=getchar()) != '\n')//让getchar遇到\n才停下，避免错误的读取到空格等字符
    {
        ;
    }

    printf("是否确认(Y\\N)\n");
    h = getchar();

    if((h == 'Y') || (h == 'y'))
    {
        printf("确认成功\n");
    }
    else if((h == 'N') || (h == 'n'))
    {
        printf("放弃确认成功\n");
    }
    else
    {
        while((h != 'Y') || (h != 'y') || (h != 'N') || (h != 'n'))
        {
             printf("输入错误，请重新输入密码\n");
             scanf("%s",passwd);
             while((ch=getchar()) != '\n')
            {
                ;
            }
             printf("是否确认(Y\\N)\n");
             h = getchar();
             if((h == 'Y') || (h == 'y'))
            {
                printf("确认成功\n");
                break;
            }
            else if((h == 'N') || (h == 'n'))
            {
                printf("放弃确认成功\n");
                break;
            }
        }
    }
    return 0;

}
