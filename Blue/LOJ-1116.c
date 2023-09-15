#include<stdio.h>
int main()
{
    int t,k;
    long long int w,d,r,i;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld",&w);
        if(w%2!=0)
            printf("Case %d: Impossible\n",k);
        else
        {
            for(i=2;i<=w;i+=2)
            {
                r=w%i;
                d=w/i;
                if(r==0&&d%2!=0){
                    printf("Case %d: %lld %lld\n",k,d,i);
                    break;}
            }

        }

    }
}
