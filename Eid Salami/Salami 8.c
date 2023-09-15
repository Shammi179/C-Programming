#include<stdio.h>
int main()
{
    double n1,n2,n3,n4,n5;
    printf("Enter marks of Five subjects: ");
    scanf("%lf %lf %lf %lf %lf",&n1,&n2,&n3,&n4,&n5);
    printf("Total = %.0lf\n",n1+n2+n3+n4+n5);
    printf("Average = %.0lf\n",(n1+n2+n3+n4+n5)/5);
    printf("Percentage = %.2lf\n",(n1+n2+n3+n4+n5)/5);
}
