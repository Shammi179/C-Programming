#include <stdio.h>
int main()
{
   float a,b,c,x,y,z,R1,R2;
   scanf("%f %f %f",&a,&b,&c);
   x=b*b-(4*a*c);
   if(x<0||a==0)
   {
      printf("Impossivel calcular\n");
   }
   else {   y=sqrt(x);
         R1=(-b+y)/(a+a);
         R2=(-b-y)/(a+a);
         printf("R1 = %.5f\n",R1);
         printf("R2 = %.5f\n",R2);}
}
