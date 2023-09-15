#include<stdio.h>
int main()
{
    int n,a,s=0,i;
    scanf("%d ",&n);
   for(i=0;i<5;i++)
   {
       scanf("%d",&a);
       if(n==a)
        s+=1;
   }
    printf("%d\n",s);
    return 0;
}
