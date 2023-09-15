#include<stdio.h>
int main()
{
    int t,a,b,s=0,i,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        m=a*b;
        s+=m;
    }
    printf("%d\n",s);
}
