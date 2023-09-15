#include<stdio.h>
int main()
{
    int i,n,s=0,p;
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        p=i*i;
        s+=p;
    }
    printf("Sum = %d\n",s);
    return 0;
}
