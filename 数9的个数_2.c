//��Ŀ���ƣ���9�ĸ���
//��Ŀ����:��д������һ��1��100�����������г����˶��ٸ�����9
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 90;
    int count = 0;
    for(a=1;a<=100;a++)
    {
        if((9 == a%10) || (9 == a/10))
        {
            printf("%d ",a);
            count++;
        }
    }
    printf("count = %d\n",count);
    return 0;
}
