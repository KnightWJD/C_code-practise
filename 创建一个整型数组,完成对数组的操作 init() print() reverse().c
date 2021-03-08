 // ����һ����������,��ɶ�����Ĳ���

 // 1. ʵ�ֺ���init() ��ʼ������ȫ0
 // 2. ʵ�� print() ��ӡ�����ÿ��Ԫ��
 // 3. ʵ�� reverse() �����������Ԫ�ص�����

#include <stdio.h>

void reverse(int arr[],int sz)
{
    int i = 0;
    int b = 0;
    for(i=0;i<(sz/2);i++)
    {
        b = arr[i];
        arr[i]=arr[sz-i-1];
        arr[sz-1-i]=b;
    }
}

void init(int arr[],int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        arr[i] = 0;
    }
}

void print(int arr[],int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int sz = sizeof(arr) / sizeof(arr[0]);

    print(arr,sz);

    reverse(arr,sz);
    printf("\n");
    print(arr,sz);

    init(arr,sz);
    printf("\n");
    print(arr,sz);

    return 0;
}
