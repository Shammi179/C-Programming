#include<stdio.h>
int main()
{
    int t,n,s,i,sum,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&s);
            if(s>=0)
            sum+=s;
        }
        printf("Case %d: %d\n",i,sum);
    }
}
