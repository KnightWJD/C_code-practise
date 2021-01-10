#include <stdio.h>
#include <string.h> //strlen的头文件
int main()
{
    char arr1[] = {"welcome to China!!!!!"};
    char arr2[] = {"#####################"};
    int left = 0;
//    int right = sizeof(arr1) / sizeof(arr[0]) -2; // -2是因为字符串有一个\n
    int right = strlen(arr1)-1;
    while(right>=left)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];
        left++;
        right--;
        printf("%s\n",arr2);
    }

    return 0;
}
