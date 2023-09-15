#include <stdio.h>
int main()
{
   int table[10][10],i,j,n;
   for(i=0;i<=10;i++)
   {
      for(j=0;j<=10;j++)
      {
         table[i][j]=i*j;
      }
   }
   scanf("%d",&n);
   for(i=1;i<=10;i++)
   {
      printf("%d X %d= %d\n",n,i,table[n][i]);
   }
   return 0;
}
