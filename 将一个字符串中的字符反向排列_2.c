 // ��һ���ַ����е��ַ���������(�ݹ�ʵ��)


#include <stdio.h>
#include <string.h>

int my_strlen(char* pa)
{
    int count=0;
    while(*pa != '\0')
    {
        count++;
        pa++;
    }
    return count;
}

void reverse_string(char arr[])
{
    char tmp = arr[0];
    int len = my_strlen(arr);
    arr[0] = arr[len-1];
    arr[len-1] = '\0';
    if(my_strlen(arr+1) >= 2)
    {
        reverse_string(arr+1);
    }
    arr[len - 1] = tmp;
}

int main()
{
    char arr[] = "abcde";
    reverse_string(arr);
    printf("%s\n",arr);
    return 0;
}

