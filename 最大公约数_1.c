//��Ŀ���ƣ����Լ��
//��Ŀ���ݣ����������������������������Լ��
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("������������");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        for(c=b;c<=b && c>0;c--)
        {
            if((b % c == 0) && (a % c == 0))
               {
                   printf("���Լ��Ϊ%d\n",c);
                   break;
               }

        }
        printf("���Լ��Ϊ%d\n",c);
    }
    else if(b>a)
    {
        for(c=a;c<=a && c>0;c--)
        {
            if((b % c == 0) && (a % c == 0))
               {
                   printf("���Լ��Ϊ%d\n",c);
                   break;
               }
        }
    }
    else
    {
        printf("���Լ��Ϊ%d\n",a);
    }
    return 0;
}
