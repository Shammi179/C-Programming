#include<stdio.h>
int main()
{
    int n,t,s,i,r;
    scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       scanf("%d",&n);
       s=0;
       while(n!=0)
       {
           r=n%2;
           if(r==1) s++;
           n=n/2;
       }
       if(s%2==0) printf("Case %d: even\n",i);
       else printf("Case %d: odd\n",i);
   }
}
