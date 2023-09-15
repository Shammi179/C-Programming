#include<stdio.h>
int main()
{
    int t,i;
    double r,s,c,pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        s=4*r*r;
        c=pi*r*r;
        printf("Case %d: %.2lf\n",i,(s-c)+0.0000000001);
    }
    return 0;
}
