#include<stdio.h>
int main()
{
   int i,a=1,b=1,c=1,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      printf("%d %d %d\n",a,b,c);
      printf("%d %d %d\n",a,b+1,c+1);
      a=a+1;
      b=a*a;
      c=a*a*a;

   }
}
