#include<stdio.h>
int main()
{
   float a,n;
   scanf("%f",&a);
   if(a>=0.00&&a<=2000.00)
   {
      printf("Isento\n");
   }
   else if(a>=2000.01&&a<=3000.00)
   {
      a=a-2000.00;
      n=a*8/100;
      printf("R$ %.2f\n",n);
   }
    else if(a>=3000.01&&a<=4500.00)
   {
      a=a-3000.00;
      n=a*18/100;
      printf("R$ %.2f\n",n+80);
   }
    else if(a>4500.00)
   {
      a=a-4500.00;
      n=a*28/100;
      printf("R$ %.2f\n",n+350);
   }
}
