//题目名称：求最大值
//题目内容：求10个整数中的最大值
#include <stdio.h>


int main()
{
    int arr[10]= {0};
    int i = 0;
    int a = 0;
    int e = 0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a);
        char b = getchar();
        arr[i] = a;
        if('\n' == b)
        {
            break;
        }
    }
    int max = arr[0];//若开始 int max = 0 的话，与负值比校会出现问题
    while(e<10)
    {
        if(max<arr[e])
        {
            max = arr[e];
        }
        e++;
    }

    printf("最大值为 %d\n",max);
    return 0;
}
