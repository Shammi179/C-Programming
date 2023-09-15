#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        if(n>2014) printf("%d A.C.\n",n-2014);
        else if(n<=2014) printf("%d D.C.\n",2014-n+1);
    }
}
