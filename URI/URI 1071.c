#include <stdio.h>
int main()
{
   int x,y,i,sum=0,n;
   scanf("%d %d",&x,&y);
   if(x>y)
   {
      x=x+y;
      y=x-y;
      x=x-y;
   }
   if(x%2==0)
   {
      x++;
      n=x;
   }
   else n=x+2;
   for(i=n;i<y;i=i+2)
   {
      sum=sum+i;
   }
   printf("%d\n",sum);
}
