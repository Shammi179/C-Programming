#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first angle: ");
    scanf("%d",&a);
    printf("Enter second angle: ");
    scanf("%d",&b);
    printf("Third angle = %d\n",180-(a+b));
    return 0;

}
