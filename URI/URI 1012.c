#include <stdio.h>
int main()
{
   float A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RECTANGULO,pi;
   scanf("%f %f %f",&A,&B,&C);
   pi=3.14159;
   TRIANGULO=0.5*A*C;
   CIRCULO=pi*pow(C,2);
   TRAPEZIO=((A+B)/2)*C;
   QUADRADO=B*B;
   RECTANGULO=A*B;
   printf("TRIANGULO: % .3lf\n",TRIANGULO);
   printf("CIRCULO: % .3lf\n",CIRCULO);
   printf("TRAPEZIO: % .3lf\n",TRAPEZIO);
   printf("QUADRADO: % .3lf\n",QUADRADO);
   printf("RECTANGULO: % .3lf\n",RECTANGULO);
   return 0;

}
