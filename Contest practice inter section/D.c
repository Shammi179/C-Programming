#include<stdio.h>
int main()
{
    double i,n,s=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&n);
        s+=n;
    }
    printf("%.0lf\n",s/6);
    return 0;
}
