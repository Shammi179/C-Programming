#include <stdio.h>
int main()
{
   int NUMBER,wh;
   float m,SALARY;
   scanf("%d %d",&NUMBER,&wh);
   scanf("%f",&m);
   SALARY=wh*m;
   printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);
   return 0;
}
