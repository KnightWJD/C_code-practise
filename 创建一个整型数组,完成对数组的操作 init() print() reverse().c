 // 创建一个整型数组,完成对数组的操作

 // 1. 实现函数init() 初始化数组全0
 // 2. 实现 print() 打印数组的每个元素
 // 3. 实现 reverse() 函数完成数组元素的逆置

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
