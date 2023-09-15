#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,c,d,e,f,g;
   scanf("%d",&a);
   b=a%10;
   c=a/10;
   d=c%10;
   e=c/10;
   f=e%10;
   g=b*100+d*10+e;
   printf("%d\n",g);
   getch();
}
