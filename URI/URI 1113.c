#include<stdio.h>
int main()
{
   int a,b,i;
   for(i=1;i>0;i++)
   {
      scanf("%d %d",&a,&b);
      if(a>b) printf("Decrescente\n");
      else if(a<b) printf("Crescente\n");
      else if(a==b)
         break;
   }


}
