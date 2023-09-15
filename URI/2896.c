#include<stdio.h>
int main()
{
    int t,k,n,r,res,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);
        if(n>=k)
        {
           res=n/k;
           r=n%k;
           printf("%d\n",r+res);
        }
        else if(n<k)
         printf("%d\n",n);
    }
}
