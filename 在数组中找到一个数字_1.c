#include <stdio.h>

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int k = 10;
    //写一个代码，在arr数组中找到7
    int sz = 0;
    int i = 0;
    sz = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        if(i==k)
        {
            int a = 0;
            a = i-1;
            printf("找到了，下标是%d\n",a);
            break;
        }

    }
     if(i==sz)
        {
            printf("没找到\n");

        }
    return 0;
}
