#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    //           0,1,2,3,4,5,6,7,8,9
    printf("����������Ҫ���ҵ����֣����ǽ���������±�\n");
    int a = 0;
    scanf("%d",&a);
    int n = 0;
    n = sizeof(arr)/ sizeof(arr[0]);//����Ԫ�ظ���
    int left = 0;
    int right = n-1;
    int mid = 0;
    while(right>=left)
    {
        mid = (left+right)/2;
        if(arr[mid]>a)
        {
            right = mid-1;
        }
        else if(arr[mid]<a)
        {
            left = mid+1;
        }
        else
        {
            printf("���ҽ�����%d���±�Ϊ%d\n",a,mid);
            break;
        }
    }
    if(left>right)
    {
        printf("���ҽ�����δ���ҵ�\n");
    }
    return 0;
}
