//��Ŀ���ƣ���ӡ����
//��Ŀ���ݣ���ӡ100��200֮�������
#include <stdio.h>
#include <math.h> //sqrt ��ͷ�ļ�
int main()
{

//�����������ǣ�ֻ�ܱ�1���߱�������
    int a = 0;
    int b = 0;
    int c = 2;
    int count = 0;
    //ż��������������
    for(a=101,b=200;a<=b;a+=2,c=2)//sqrt��ƽ������ѧ�⺯��
//�Ż���i = a*b  a��b��������һ������С�ڵ��ڿ�ƽ��i������ڿ�ƽ��i֮ǰ��û�ҵ�һ�����ӿ�������i��˵��i������
    {
        while(c<=sqrt(a))
        {

            if(0 == a % c)
            {
                break;
            }
            c++;
        }
        if(c>sqrt(a))
        {
            count++;
            printf("%d\n",a);
        }

    }
    printf("\ncount = %d\n",count);
    return 0;
}
