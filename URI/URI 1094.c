#include<stdio.h>
int main()
{

   int a,i,n,sum=0,cc=0,rr=0,ss=0;
   char ch;
   double x,y,z;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      scanf("%d %c",&a,&ch);
      sum=sum+a;
 if (ch=='C')cc+=a;
 else if(ch=='R')rr+=a;
 else ss+=a;
   }
   x=(cc*100.00)/sum;
   y=(rr*100.00)/sum;
   z=(ss*100.00)/sum;
      printf("Total: %d cobaias\n",sum);
      printf("Total de coelhos: %d\n",cc);
      printf("Total de ratos: %d\n",rr);
      printf("Total de sapos: %d\n",ss);
      printf("Percentual de coelhos: %.2lf %%\n",x);
      printf("Percentual de ratos: %.2lf %%\n",y);
      printf("Percentual de sapos: %.2lf %%\n",z);


}
