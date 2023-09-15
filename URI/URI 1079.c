#include<stdio.h>
int main()
{
   int n,i;
   float a,b,c,d;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      scanf("%f %f %f",&a,&b,&c);
      d=(a*2+b*3+c*5);
      printf("%.1f\n",d/10);
   }
}
