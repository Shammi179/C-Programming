#include <stdio.h>
int main()
{
   int c1,u1,c2,u2;
   float price1,price2,VALOR_A_PAGAR;
   scanf("%d %d %f",&c1,&u1,&price1);
   scanf("%d %d %f",&c2,&u2,&price2);
   VALOR_A_PAGAR=(u1*price1+u2*price2);
   printf("VALOR A PAGAR: R$ %.2f\n",VALOR_A_PAGAR);
   return 0;
}
