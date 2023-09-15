#include<stdio.h>
int main()
{
    int i,n,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(2*i-1);
    }
    printf("Sum = %d\n",s);
    return 0;
}
