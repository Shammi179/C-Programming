#include<stdio.h>
int main()
{
   int i,t,j;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
      scanf("%d",&j);
       if(j==0) printf("NULL\n");
      else if(j<0)
      {
         if(j%2==0)printf("EVEN NEGATIVE\n");

         else printf("ODD NEGATIVE\n");
      }


     else if(j>0)
     {
        if(j%2!=0)printf("ODD POSITIVE\n");
        else printf("EVEN POSITIVE\n");
     }
   }
}
