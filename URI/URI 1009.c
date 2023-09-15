#include <stdio.h>
int main()
{
   char c;
   double s,p,TOTAL;
   scanf("%c",&c);
   scanf("%lf %lf",&s,&p);
   p=(p*15)/100;
   TOTAL=p+s;
   printf("TOTAL = R$ %.2lf",TOTAL);
   return 0;
}
