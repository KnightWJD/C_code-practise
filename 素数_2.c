#include <stdio.h>
#include <math.h>

int ss(int* pa)
{
    int b = 0;
    for(b=2;b<sqrt(*pa);b++) //ֻ�Գ��� ��ƽ��a������
    {
        if((*pa % b) == 0 )
        {
            return 1; //return 1 һִ�к���ֱ�ӽ���
        }
    }
    return 0;
}
int main()
{
    int a = 0;
    for(a=100;a<=200;a++)
    {
        if(ss(&a) == 0)
        {
            printf("%d ",a);
        }
    }
    return 0;
}
