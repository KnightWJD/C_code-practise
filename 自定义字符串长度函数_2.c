 // �Զ����ַ������Ⱥ���_2
 //��ָ��ʵ��

#include <stdio.h>

int my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while(*end != '\0')
    {
        end++;
    }
    return end-start; //������ַ�����ֵΪ�м�Ԫ�صĸ���
}
int main()
{
    char arr[] = "knight";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
}
