#include<stdio.h>
int main()
{
    int t,m,n,q,i,j,k,l,sum1,sum2,mul,r,s,x,y;
    scanf("%d",&t);
    for(r=1;r<=t;r++);
    {
        scanf("%d %d",&n,&m);
        int a[n],b[m];
        for(s=0;s<n;s++);
        {
            scanf("%d",&a[s]);
        }
         for(s=0;s<m;s++);
        {
            scanf("%d",&b[s]);
        }
        scanf("%d",&q);
        for(s=0;s<q;s++)
            scanf("%d %d %d %d",&i,&j,&k,&l);
            sum1=0;
        for(y=k-1;y<l;y++)
            sum1=sum1+m[y];
            sum2=0;
        for(x=i-1;i<j;i++)
            sum2=sum2+n[x];
        mul=sum1*sum2;
        printf("Case %d:\n%d\n",r,mul);
    }
}
