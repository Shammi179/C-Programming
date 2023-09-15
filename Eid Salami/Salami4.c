#include<stdio.h>
int main()
{
    int r;
    float p=3.14;
    printf("Enter radius: ");
    scanf("%d",&r);
    printf("Diameter = %d units\n",r*2);
    printf("Circumference = %.2f units\n",2*p*r);
    printf("Area = %.0f sq.units\n",p*r*r);
}
