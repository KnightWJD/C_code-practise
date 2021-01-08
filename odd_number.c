#include <stdio.h>


int main()
{
    int n1 = 0;
    int i = 0;
    scanf("%d",&n1);
    if(1 == n1%2)
        printf("为奇数\n");
    else
        printf("为偶数\n");

    while(i<=100)
    {
        if(1 == i%2)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;

}
