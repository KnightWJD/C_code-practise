//��Ŀ���ƣ��˷��ڽǱ�
//��Ŀ���ݣ�����Ļ�����9*9�˷��ڽǱ� ��
#include <stdio.h>


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    for(a=1;a<=9;a++)
    {
        b = 1;
        for(b=1;b<=a;b++)
        {
            c = a*b;
            printf("%d��%d=%-2d ",a,b,c); //%2d : ��ӡ2λ������2λ�ÿո��Ҷ��� %-2d�������
        }
        printf("\n");
    }
    return 0;
}
