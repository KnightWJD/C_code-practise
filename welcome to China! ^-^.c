#include <stdio.h>
#include <string.h> //strlen��ͷ�ļ�
#include <windows.h> //sleepͷ�ļ�
#include <stdlib.h> //system ��ͷ�ļ�
int main()
{
    char arr1[] = {"welcome to China! ^-^"};
    char arr2[] = {"#####################"};
    int left = 0;
//    int right = sizeof(arr1) / sizeof(arr[0]) -2; // -2����Ϊ�ַ�����һ��\n
    int right = strlen(arr1)-1;
    while(right>=left)
    {
        arr2[left]=arr1[left];
        arr2[right]=arr1[right];

        left++;
        right--;

        printf("%s\n",arr2);
        Sleep(1000);//��Ϣ1s
        system("cls"); //system-ִ��ϵͳ�����һ������ cls-�����Ļ

    }
    printf("%s\n",arr2);

    return 0;
}
