#include<stdio.h>
int main()
{
    long long int A,B,s,i,T;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld %lld",&A,&B);
        s=A+B;
        printf("Case %lld:\n%lld + %lld = %lld\n\n",i,A,B,s);
    }
    return 0;
}
