#include<stdio.h>
int dec_bin(long long int n)
{
    long long int r,a=0,i=1;
    while(n!=0)
    {
        r=n%2;
        a+=r*i;
        n=n/2;
        i*=10;
    }
    return a;
}
int main()
{
    int t,i;
    long long int d1,d2,d3,d4,b1,b2,b3,b4,s,bn1,bn2,bn3,bn4;
    char c1,c2,c3,c4,c5,c6;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%c%lld%c%lld%c%lld",&d1,&c1,&d2,&c2,&d3,&c3,&d4);
        scanf("%lld%c%lld%c%lld%c%lld",&b1,&c4,&b2,&c5,&b3,&c6,&b4);
        bn1=dec_bin(d1);
        bn2=dec_bin(d2);
        bn3=dec_bin(d3);
        bn4=dec_bin(d4);
        if(bn1==b1&&bn2==b2&&bn3==b3&&bn4==b4)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);
    }

}
