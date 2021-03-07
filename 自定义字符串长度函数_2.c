 // 自定义字符串长度函数_2
 //用指针实现

#include <stdio.h>

int my_strlen(char* str)
{
    char* start = str;
    char* end = str;
    while(*end != '\0')
    {
        end++;
    }
    return end-start; //两个地址相减的值为中间元素的个数
}
int main()
{
    char arr[] = "knight";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
}
