 // ��һ��������һ�����ж�����1�ĸ���_2

#include <stdio.h>
int count_BIN(unsigned int n) //unsigned :����޷�����
{
    int count = 0;
    while(n)
    {
        if(n%2 == 1)
        {
            count++;
        }
        n = n/2;
    }
    return count;
}

int main()
{
    int a = 0;
    printf("������һ������\n");
    scanf("%d",&a);
    int count = count_BIN(a);
    printf("�����ֶ�������1�ĸ���Ϊ %d\n",count);
    return 0;
}

