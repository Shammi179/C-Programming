#include<stdio.h>
int main()
{
    int a,r;
    printf("Input Number: ");
    scanf("%d",&a);
    printf("Reverse: ");
    for(;a>0;)
    {
       r=a%10;
       printf("%d",r);
       a=a/10;
    }
    return 0;

}
