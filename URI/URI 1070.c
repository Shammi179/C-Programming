#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   if(x%2==0)
   {
      printf("%d\n%d\n%d\n%d\n%d\n%d\n",x+1,x+3,x+5,x+7,x+9,x+11);
   }
   else if(x%2!=0)
   {
      printf("%d\n%d\n%d\n%d\n%d\n%d\n",x,x+2,x+4,x+6,x+8,x+10);
   }

}
