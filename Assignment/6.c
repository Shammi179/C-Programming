#include<stdio.h>
int main()
{
    int i,a,s=1;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
       s*=i;
    }
     printf("Factorial of %d = %d\n",a,s);
     return 0;
}
