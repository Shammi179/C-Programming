#include<stdio.h>
int main()
{
    int t,i;
    double r,sq,c,pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        sq=4*r*r;
        c=pi*r*r;
        printf("Case %d: %.2lf\n",i,(sq-c)+0.0000000001);
    }
    return 0;
}
