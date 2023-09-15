#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=4;i<=n;i+=2)
    {
       s+=i;
    }
    printf("%d\n",s);
    return 0;
}
