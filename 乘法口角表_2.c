 // ʵ��һ������,��ӡ�˷��ھ���,�ھ���������������Լ�ָ��
 //  ��:����9,���9*9�ھ���,���12,���12*12�ĳ˷��ھ���

#include <stdio.h>

void print_multiply_chart(int a)
{
    int i = 0;
    int j = 0;
    for(i=0;i<=a;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            printf("%d*%d = %-2d ",i,j,i*j);
        }
    }
}

int main()
{
    int a = 0;
    printf("������һ������\n");
    scanf("%d",&a);
    print_multiply_chart(a);
    return 0;
}

