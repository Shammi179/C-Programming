#include<stdio.h>
int main()
{
   int i,N,X,n=0;
   scanf("%d",&N);
   for(i=1;i<=N;i++)
   {
      scanf("%d",&X);
      if(X>=10&&X<=20)
      {
         n++;
      }

   }
   printf("%d in\n",n);
   printf("%d out\n",N-n);

}
