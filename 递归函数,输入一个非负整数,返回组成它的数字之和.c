 // дһ���ݹ麯��,DigitSum(n) ����һ���Ǹ�����,���������������֮��
 // ���� ����DigitSum(1729) ��Ӧ�÷��� 1+7+2+9 ���ĺ���19
 // ����1729 ��� 19


#include <stdio.h>



int DigitSum(unsigned int n)
{
    if(n>=1)
    {
        int a = 0;
        int b = 0;
        b = n%10;
        a += b;
        n = n/10;
        return a+DigitSum(n);
    }

}

int main()
{
    unsigned int a = 0; //unsigned : ��ĿҪ���ǷǸ�����
    scanf("%d",&a);
    int b = DigitSum(a);
    printf("%d\n",b);

    return 0;
}

