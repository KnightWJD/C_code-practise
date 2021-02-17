//ц╟ещеепР
#include <stdio.h>
void maopao_arr(int arr[],int sz)
{
    int i = 0;
    for(i=0;i<sz-1;i++)
    {
        int a = 0;
        for(a=0;a<sz-1-i;a++)
        {
            int tmp = arr[a];
            arr[a] = arr[a+1];
            arr[a+1] = tmp;
        }
    }
}
int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    maopao_arr(arr,sz);
    for(i=0;i<sz;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
