#include <stdio.h>

int main()
{
    int n = 0;
    int i = 1;
    int cheng = 1;
    printf("���������֣����ǻ�������������ֵĽ׳�");
    scanf("%d",&n);
    for(i = 1;n>=i; i++)
    {
        cheng *= i;
    }
    printf("%d�Ľ׳�Ϊ%d\n",n,cheng);
    return 0;
}
