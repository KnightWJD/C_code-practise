#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int tmp = 0;
    printf("������3 ������");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(a<c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if(b<c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    printf("%d%d%d",a,b,c);
    return 0;
}
