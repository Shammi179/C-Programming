#include<stdio.h>
int main()
{
   int n,i,j=0,sum=0;
   float avg;
   for(i=1;i>0;i++)
   {
      scanf("%d",&n);
      if(n<0) break;
      if(n>0)
      {
         j++;
         sum+=n;
         avg=(float)sum/j;

      }

   }
   printf("%.2f\n",avg);

}
