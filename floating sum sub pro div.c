#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,sum,sub,pro,div;
    printf("Enter number:");
    scanf("%lf %lf",&a,&b);
    sum=a+b;
    sub=a-b;
    pro=a*b;
    div=b/a;
    printf("sum=%lf\nsub=%lf\npro=%lf\ndiv=%lf\n",sum,sub,pro,div);
    return 0;
}
