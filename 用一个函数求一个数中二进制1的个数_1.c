 // ��һ��������һ�����ж�����1�ĸ���_1

#include <stdio.h>
int count_BIN(int n)
{
    int count = 0;
    int i = 0;
    for(i=0;i<32;i++)
    {
        if(n&1 == 1)
        {
            count++;
        }
        n = n>>1;
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
