 // 将数组a中的内容和数组b中的内容进行交换(数组一样大)

#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4};
    int b[] = {5,6,7,8};
    int sz = sizeof(a) / sizeof(a[0]);
    int i = 0;
    int c = 0;
    for(i=0;i<sz;i++)
    {
        c = a[i];
        a[i] = b[i];
        b[i] = c;
    }
    return 0;
}
