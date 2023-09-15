#include<stdio.h>
int main()
{
   int i,j,m=0,n=0,o=0,p=0;
   for(i=1;i<=5;i++)
   {
      scanf("%d",&j);
      if(j%2==0)
         m++;
         if(j%2!=0)
            n++;
            if(j>0)
               o++;
            if(j<0)
               p++;
   }
   printf("%d valor(es) par(es)\n",m);
   printf("%d valor(es) impar(es)\n",n);
   printf("%d valor(es) positivo(s)\n",o);
   printf("%d valor(es) negativo(s)\n",p);

}
