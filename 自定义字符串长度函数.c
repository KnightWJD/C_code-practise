//��������ʱ���������Զ��庯�����ַ�������
#include <stdio.h>

int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1+my_strlen(1+str);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char arr[] = "knight";
    printf("%d",my_strlen(arr));
    return 0;
}
