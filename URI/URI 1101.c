#include<stdio.h>
int main()
{
   int a,b,i,j,sum=0;
   for(i=1;i>0;i++)
   {
      scanf("%d %d",&a,&b);
      if(a<=0||b<=0)
         break;
     else if(a>b)
      {
         a=a+b;
         b=a-b;
         a=a-b;
      }
      for(j=a;j<=b;j++){
      printf("%d ",j);
       sum=sum+j;

     }
     printf("Sum=%d\n",sum);
     sum=0;


   }



}
