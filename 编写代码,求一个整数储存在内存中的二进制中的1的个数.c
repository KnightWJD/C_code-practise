//��д����,��һ�������������ڴ��еĶ������е�1�ĸ���

#include <stdio.h>


int main()
{
    int num = 0;
    int count = 0;
    int i = 0;
    scanf("%d",&num);

    for(i=0;i<32;i++)
    {
        if((num>>i)&1 == 1) // num &(��λ��) ���Ϊ 0 ,˵��num ���һλΪ0;���Ϊ1,˵��num���һλΪ1
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;


}
