 // 用指针打印数组内容

#include <stdio.h>
void print(int* pa,int sz)
{
    int i = 0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",*(pa+i));
    }

}


int main()
{
    int arr[] = {1,2,4,5,7,9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    print(arr,sz);

    return 0;
}

