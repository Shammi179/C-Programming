#include<stdio.h>
int main()
{
    int a,b;
    printf("First number: ");
    scanf("%d",&a);
    printf("Second number: ");
    scanf("%d",&b);
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nModulus = %d\n",a+b,a-b,a*b,a/b,a%b);
    return 0;
}
