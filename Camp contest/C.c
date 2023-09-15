#include<stdio.h>
int main()
{
    int t,n,i,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        a=((((((n*567)/9)+7492)*235)/47)-498);
        a=a/10;
        b=a%10;
        printf("%d\n",abs(b));
    }
    return 0;
}
