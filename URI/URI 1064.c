#include<stdio.h>
int main()
{
   int i,v=0;
   float p,q=0,avg;
   for(i=1;i<=6;i++)
   {
      scanf("%f",&p);
      if(p>0){
         q=q+p;
      v++;
      }
   }
   avg=q/v;
   printf("%d valores positivos\n%.1f",v,avg);

}

