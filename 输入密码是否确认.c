#include <stdio.h>

int main()
{
    int ch =0;
    int h = 0;
    char passwd[20] = {0};
    printf("����������");
    scanf("%s",passwd);

    while((ch=getchar()) != '\n')//��getchar����\n��ͣ�£��������Ķ�ȡ���ո���ַ�
    {
        ;
    }

    printf("�Ƿ�ȷ��(Y\\N)\n");
    h = getchar();

    if((h == 'Y') || (h == 'y'))
    {
        printf("ȷ�ϳɹ�\n");
    }
    else if((h == 'N') || (h == 'n'))
    {
        printf("����ȷ�ϳɹ�\n");
    }
    else
    {
        while((h != 'Y') || (h != 'y') || (h != 'N') || (h != 'n'))
        {
             printf("���������������������\n");
             scanf("%s",passwd);
             while((ch=getchar()) != '\n')
            {
                ;
            }
             printf("�Ƿ�ȷ��(Y\\N)\n");
             h = getchar();
             if((h == 'Y') || (h == 'y'))
            {
                printf("ȷ�ϳɹ�\n");
                break;
            }
            else if((h == 'N') || (h == 'n'))
            {
                printf("����ȷ�ϳɹ�\n");
                break;
            }
        }
    }
    return 0;

}
