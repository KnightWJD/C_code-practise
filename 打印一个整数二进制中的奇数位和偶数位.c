 // ��ӡһ�������������е�����λ��ż��λ

#include <stdio.h>

void swap_odd_even(int a)
{
    int i=0;
    printf("����λ:\n");
    for(i=30;i>=0;i-=2) //�ӵ�һλ�Ƶ���31λҪ��30��λ
    {
        printf("%d ",(a>>i)&1);

    }
    printf("\n");
    printf("ż��λ:\n");
    for(i=31;i>=1;i-=2)
    {
        printf("%d ",(a>>i)&1);

    }
}

int main()
{
    int n = 0;
    printf("������һ������\n");
    scanf("%d",&n);
    swap_odd_even(n);

    return 0;
}

