#include<stdio.h>
int main()
{
   int a=0,b=1,i,n,c;
   scanf("%d",&n);
   printf("%d %d",a,b);
   for(i=1;i<=n-2;i++)
   {
      c=a+b;
      printf(" %d",c);
      a=b;
      b=c;
      c++;
   }
   printf("\n");

}