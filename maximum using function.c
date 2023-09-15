#include <stdio.h>
double maximum(double a,double b,double c)
{
   int larger;
   if(a>b && a>c)
      {
         larger = a;
      }
   else if(b>c)
   {
      larger = b;
   }
   else
   {
      larger = c;
   }
   return larger;
}
int main()
{
   double a,b,c,largest;
   scanf("%lf %lf %lf",&a,&b,&c);
   largest = maximum(a,b,c);
   printf("The Largest Number is:%.2lf\n",largest);
}
