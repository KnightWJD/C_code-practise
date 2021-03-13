//编写一个函数,实现n的k次方(递归)


#include <stdio.h>

double n_cf(int n,int k)
{
    if(k>0)
    {
        return n*n_cf(n,k-1);
    }
    else if(k==0)
    {
        return 1.0;
    }
    else
    {
        return 1.0/n_cf(n,-k);
    }
}



int main()
{
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    double c = n_cf(a,b);
    printf("%lf\n",c);

    return 0;
}

