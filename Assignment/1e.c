#include<stdio.h>
int main()
{
    int n,i,s=0,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=(i(i-1))/2;
        q=p+1;
        printf("%d ",q);
    }
    for(i=1;i<=n;i++)
    {
        s+=p;
    }
    printf("\n%d",s);
}
