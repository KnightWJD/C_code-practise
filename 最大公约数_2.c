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
    while(a%b != 0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    printf("�������������Լ��Ϊ%d\n",b);
    return 0;
}
