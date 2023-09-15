#include<stdio.h>
int main()
{
    long long int n,s,N;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        N=n;
        s=0;
        while(n>=0)
        {
            s=(s*10)+(n%10);
            n=n/10;
            if(n==0)break;
        }
        if(s==N)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }

}
