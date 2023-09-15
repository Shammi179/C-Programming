#include <stdio.h>
int main()
{
   int i,sum,start,end,dif;
   scanf("%d %d %d",&start,&dif,&end);
   for(i=start,sum=0;i<=end;i=i+dif)
   {
     sum=sum+i;
   }
printf("sum is %d",sum);
}
