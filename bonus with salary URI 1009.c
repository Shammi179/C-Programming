#include <stdio.h>
int main()
{
   char str[20];
   double s,p,TOTAL;
   scanf("%s",str);
   scanf("%lf %lf",&s,&p);
   p=(p*15)/100;
   TOTAL = p+s;
   printf("TOTAL = R$ %.2lf\n",TOTAL);
   return 0;
}
