#include<stdio.h>
int main()
{
    int i,t,n;
    double R,r,pi=2*acos(0.0),c,cc;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %d",&R,&n);
        c=(2*pi*R)/n;
        cc=c/2*pi;
        printf("Case %d: %lf\n",i,cc);
    }
    return 0;
}
