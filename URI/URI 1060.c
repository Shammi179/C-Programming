#include<stdio.h>
int main()
{
   int i,v=0;
   float p;
   for(i=1;i<=6;i++)
   {
      scanf("%f",&p);
      if(p>0)
      v++;
   }
   printf("%d valores positivos\n",v);

}
