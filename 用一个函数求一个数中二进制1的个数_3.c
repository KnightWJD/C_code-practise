 // ��һ��������һ�����ж�����1�ĸ���_3

#include <stdio.h>
int count_BIN(int n) //unsigned :����޷�����
{
    int count = 0;
    while(n)
    {
        n = n&(n-1); // ÿִ��һ��,n�������е�һ��1�ͻ����
        count++;
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

