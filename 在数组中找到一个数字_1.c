#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int k = 10;
    //дһ�����룬��arr�������ҵ�7
    int sz = 0;
    int i = 0;
    sz = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        if(i==k)
        {
            int a = 0;
            a = i-1;
            printf("�ҵ��ˣ��±���%d\n",a);
            break;
        }

    }
     if(i==sz)
        {
            printf("û�ҵ�\n");

        }
    return 0;
}
