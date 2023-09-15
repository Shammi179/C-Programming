#include<stdio.h>
int main()
{
   float A,B,C,d,e,f;
   scanf("%f %f %f",&A,&B,&C);
   d=B+C;
   e=A+B;
   f=A+C;
   if(d>A&&e>C&&f>B)
   {
      printf("Perimetro = %.1f\n",A+B+C);
   }
   else
   {
      printf("Area = %.1f\n",((A+B)/2)*C);
   }
}
