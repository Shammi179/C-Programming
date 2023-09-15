#include<stdio.h>
int main()
{
    int t,j;
    long long int n,m,s;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%lld %lld",&n,&m);
        s=n/2;
        printf("Case %d: %lld\n",j,s*m);
    }
}
