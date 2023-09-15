#include<stdio.h>
#include<math.h>
int main()
{
    double r1,r2,h,p,r3,v,pi=2*acos(0.0);
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        r3=r2+(r1-r2)*(p/h);
        v=(pi*p*(r3*r3+r2*r3+r2*r2))/3.0;
        printf("Case %d: %lf\n",i,v);
    }
}
