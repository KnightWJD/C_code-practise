//��Ŀ���ƣ������ֵ
//��Ŀ���ݣ���10�������е����ֵ
#include <stdio.h>


int main()
{
    int arr[10]= {0};
    int i = 0;
    int a = 0;
    int e = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        char b = getchar();
        arr[i] = a;
        if('\n' == b)
        {
            break;
        }
    }
    int max = arr[0];//����ʼ int max = 0 �Ļ����븺ֵ��У���������
    while(e<10)
    {
        if(max<arr[e])
        {
            max = arr[e];
        }
        e++;
    }

    printf("���ֵΪ %d\n",max);
    return 0;
}
