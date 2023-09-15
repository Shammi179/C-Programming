#include <stdio.h>
int main()
{
   int a,ano,mes,dia;
   scanf("%d",&a);
   ano=a/365;
   a=a%365;
   mes=a/30;
   dia=a%30;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
   return 0;
}
