#include <stdio.h>

int main()
{
    char passwd[20] = {0};
    int i = 0;
    for(i=0;i<3;i++)
    {
        printf("����������");
        scanf("%s",passwd);
        if(strcmp(passwd,"123456") == 0) // == ���ܱȽ������ַ����Ƿ����,Ӧ��ʹ��һ���⺯��-strcmp
        {
            printf("������ȷ\n");
            break;
        }
        else
        {
            if(0==i)
            {
                printf("�������,����ʣ2�λ���\n");
            }
            else if(1==i)
            {
                printf("�����������ʣ1�λ���\n");
            }
            else
            {
                printf("�������,���Ļ���������\n");
            }
        }
    }

    return 0;
}
