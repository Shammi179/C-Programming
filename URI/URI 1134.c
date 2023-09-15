#include<stdio.h>
int main()
{
   int a,b=0,c=0,d=0,i;
   for(i=1;i>0;i++)
   {
      scanf("%d",&a);
      if(a==1)
      {
         b++;
      }
      else if(a==2)
      {
         c++;
      }
      else if(a==3)
      {
         d++;
      }
      if(a==4)
         break;
   }
   printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",b);
      printf("Gasolina: %d\n",c);
      printf("Diesel: %d\n",d);
}
