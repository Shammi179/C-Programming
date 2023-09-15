#include<stdio.h>
int main()
{
   int i,n,j,s=0;
   for(i=1;;i++)
   {
      scanf("%d",&n);
      if(n==0) break;
      if(n%2!=0) n++;
      for(j=0;j<5;j++)
      {
          s+=n;
          n+=2;
      }

         printf("%d\n",s);
         s=0;



   }
}
