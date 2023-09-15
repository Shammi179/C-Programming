#include <stdio.h>
int main()
{
    int t,a,b,i,sum;
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        sum =a+b;
        printf("Case %d: %d\n",i,sum);
    }
}
