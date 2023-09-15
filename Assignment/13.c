#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Lower Limit: ");
    scanf("%d",&a);
    printf("Upper Limit: ");
    scanf("%d",&b);
    printf("Number div by 7 between %d and %d:\n",a,b);
    for(i=a;i<=b;i++)
    {
      if(i%7==0)
        printf("%d ",i);
    }
    return 0;
}
