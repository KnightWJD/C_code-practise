 // ����int(32λ)����m��n�Ķ����Ʊ����,�ж��ٸ�λ(bit)��ͬ


#include <stdio.h>

int count_yi(int a,int b)
{
    int count = 0;
    int c = a^b;
    while(c)
    {
        c = c&(c-1);
        count++;
    }
    return count;
}

int main()
{
    int m = 0;
    int n = 0;
    printf("��������������\n");
    scanf("%d%d",&m,&n);
    int count = count_yi(m,n);
    printf("%d\n",count);
    return 0;
}

