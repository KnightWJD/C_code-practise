//��Ŀ���ƣ���ӡ3�ı���
//��Ŀ���ݣ�дһ�������ӡ1-100����3�ı���������

#include <stdio.h>


int main()
{
    int a = 0;
    for(a=0;a<=100;a++)
    {
        if(0 == a%3)
        {
            printf("%d\n",a);
        }

    }
    return 0;
}
