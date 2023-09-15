#include<stdio.h>
int main()
{
    double r,p=3.14;
    scanf("%lf",&r);
    printf("Diameter = %.0lf units\nCircumference = %.2lf units\nArea = %.0lf sq. units\n",2*r,2*p*r,p*r*r);
}
