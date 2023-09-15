#include<stdio.h>
int main()
{
    int t,i,n,p,q,ps,qs,j;
    int nj[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&n,&p,&q);
        for(j=0;j<n;j++)
        {
            scanf("%d",&nj[j]);
        }
        if(p>n) p=n;
        qs=0;
        ps=0;
        for(j=0;j<p;j++)
        {
            qs+=nj[j];
            if(qs>q) break;
            ps++;
        }
        printf("Case %d: %d\n",i,ps);
    }
}
