//��Ŀ���ƣ��������
//��Ŀ���ݣ����� 1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
#include <stdio.h>

int main()
{
    int a = 0;
    double b = 0.00;
    double c = 0.00;
    for(a=1;a<=100;a++)
    {
        b = 1.0/a;
        if(1 == a%2)
        {
            c += b;
        }
        else if(0 == a%2)
        {
            c -= b;
        }
    }
    printf("%f\n",c);
    return 0;
}
