#include<stdio.h>
int main()
{
   int a=0,b=1,i,n,c;
   printf("Input number of terms:");
   scanf("%d",&n);
   printf("Fibonacci series:\n%d,%d",a,b);
   for(i=1;i<=n-2;i++)
   {
      c=a+b;
      printf(",%d",c);
      a=b;
      b=c;
      c++;
   }
  return 0;

}

