#include<stdio.h>
int main()
{
    int t,i,mp,lp,x,y,sum,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&mp,&lp);
        if(mp>lp) r=mp-lp;
        else if(mp<lp) r=lp-mp;
        else if(mp==lp) r=0;
        sum=r*4+19+mp*4;
        printf("Case %d: %d\n",i,sum);

    }
}
