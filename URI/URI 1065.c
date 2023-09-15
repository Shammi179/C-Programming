#include<stdio.h>
int main()
{
   int i,j,n=0;
   for(i=1;i<=5;i++)
   {
      scanf("%d",&j);
      if(j%2==0)
         n++;
   }
   printf("%d valores pares\n",n);
}
