#include<stdio.h>
int main()
{
    int a;
    printf("Enter temperature in Celsius = ");
    scanf("%d",&a);
    printf("Temperature in Fahrenheit = %d F\n",((a*9)/5)+32);
    return 0;
}
