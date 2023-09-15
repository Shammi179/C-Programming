#include<stdio.h>
int main()
{
   int i,t,n,c;
   double s,cnt,API;
   while(scanf("%d",&t)!=EOF)
   {
       s=0;
       cnt=0;
       for(i=0;i<t;i++)
       {
           scanf("%d %d",&n,&c);
           s=s+(n*c);
           cnt=cnt+c;
       }
       API=(float)s/(cnt*100);
       printf("%.4lf\n",API);
   }
return 0;
}
