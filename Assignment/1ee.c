#include<stdio.h>
int main()
{
    int i,n,s=0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=((i*(i-1))/2)+1;
        s=s+p;
    }
    printf("Sum = %d\n",s);
    return 0;
}

