#include<stdio.h>
int main()
{
   int i,j,n,m=1;
   for(i=1;i>0;i++)
   {
      scanf("%d",&n);
      if(n==0)
            break;
      printf("%d",m);
      for(j=m+1;j<=n;j++)
         printf(" %d",j);
         printf("\n");
   }
}
