#include<stdio.h>
int main()
{
    int t,i,j,n,d,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
         s=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&d);
            if(d<0) d=0;
            s+=d;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
