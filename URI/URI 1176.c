#include<stdio.h>
int main()
{
    int n,i,j,k;
    long long int a[60];
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(j=2; j<61; j++)
    {
        a[j]=a[j-1]+a[j-2];
    }
    for(i=1; i<=n; i++)
    {
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,a[k]);
    }
    return 0;

}
