//编写代码,求一个整数储存在内存中的二进制中的1的个数

#include <stdio.h>


int main()
{
    int num = 0;
    int count = 0;
    int i = 0;
    scanf("%d",&num);

    for(i=0;i<32;i++)
    {
        if((num>>i)&1 == 1) // num &(按位与) 如果为 0 ,说明num 最后一位为0;如果为1,说明num最后一位为1
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;


}
