//��n�Ľ׳ˣ��Զ��庯�����ݹ�
#include <stdio.h>

int jc(int x)
{
    if(x<=1)
    {
        return 1;
    }
    else if(x>1)
    {
        return x*jc(x-1);
    }
}
int main()
{
    int a = 0;
    scanf("%d",&a);
    printf("%d",jc(a));
    return 0;
}
