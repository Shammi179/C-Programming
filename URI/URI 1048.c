#include<stdio.h>
int main()
{
   double s,n,i,p;
   char r ='%';
   scanf("%lf",&s);
   if(s>=0.00&&s<=400.00)
   {
      p=(s*15)/100;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %c\n",p+s,p,r);
   }
   else if(s>=400.01&&s<=800.00)
   {
      p=(s*12)/100;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %c\n",p+s,p,r);
   }
   else if(s>=800.01&&s<=1200.00)
   {
      p=(s*10)/100;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %c\n",p+s,p,r);
   }
   else if(s>=1200.01&&s<=2000.00)
   {
      p=(s*7)/100;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %c\n",p+s,p,r);
   }
   if(s>2000.00)
   {
      p=(s*4)/100;
      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %c\n",p+s,p,r);
   }
}
