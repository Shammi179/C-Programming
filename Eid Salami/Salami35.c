#include<stdio.h>
int main()
{
    int a,b,r,s=0;
    printf("Input Number: ");
    scanf("%d",&a);
    printf("\nFind Frequency For: ");
    scanf("%d",&b);
   for(;a>0;)
    {
       r=a%10;
       if(r==b) s++;
       a=a/10;
    }
    printf("Frequency of %d is: %d",b,s);
    return 0;
}
