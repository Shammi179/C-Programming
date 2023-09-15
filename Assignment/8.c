#include<stdio.h>
int main()
{
    int n,i,p;
    scanf("%d",&n);
    while(n>0)
    {
        p=n%10;
        printf("%d ",p);
        n=n/10;
    }
    return 0;
}
