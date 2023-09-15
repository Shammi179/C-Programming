#include <stdio.h>
int main()
{
   int m,i,l=0;
   scanf("%d",&m);
   for(i=0;i<=m;i=i+2)
   {
   l++;
   }
   printf("LapCount: %d\n",l-1);
   return 0;
}
