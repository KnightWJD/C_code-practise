//��Ŀ���ƣ��������
//��Ŀ���ݣ����� 1/1-1/2+1/3-1/4+1/5......+1/99-1/100��ֵ����ӡ�����
#include <stdio.h>

int main()
{
    double a = 0;
    int b = 0;
    for(a=1,b=1;a<=100;a++)
    {
        a += 1/a;
        b = -b;
    }
    printf("%f\n",a);
    return 0;
}
