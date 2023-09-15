#include<stdio.h>
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if((a*b)%2==0)printf("Case %d: %d\n",i,(a*b)/2);
        else if((a*b)%2!=0) printf("Case %d: %d\n",i,((a*b)+1)/2);
    }
    return 0;
}
