#include <stdio.h>
int main()
{
   int i,j;
   for(i=0;i<10;i++)
   {
      for(j=1;j<i+1;j++)
      {
         printf("*");
      }
      printf("\n");
   }
}
