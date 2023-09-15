#include<stdio.h>
int main()
{
    double r1,r2,r3,sr1,sr2,sr3,R1,R2,R3,area,s;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf",&r1,&r2,&r3);
        sr1=r2+r3;
        sr2=r1+r3;
        sr3=r1+r2;
        R1=acos((sr2*sr2+sr3*sr3-sr1*sr1)/(2*sr2*sr3));
        R2=acos((sr1*sr1+sr3*sr3-sr2*sr2)/(2*sr1*sr3));
        R3=acos((sr2*sr2+sr1*sr1-sr3*sr3)/(2*sr2*sr1));
        s=(sr1+sr2+sr3)/2;
        area=sqrt(s*(s-sr1)*(s-sr2)*(s-sr3));
        area=area-((0.5)*(r1*r1*R1+r2*r2*R2+r3*r3*R3));
        printf("Case %d: %lf\n",i,area);
    }
}
