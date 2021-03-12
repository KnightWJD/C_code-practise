 // 将一个字符串中的字符反向排列(循环实现)


#include <stdio.h>

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
    int right = my_strlen(arr)-1;

    int left = 0;
    int tmp = 0;
    while(left < right)
    {
        tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[] = "knight";
    reverse_string(arr);
    printf("%s\n",arr);
    return 0;
}

