#include<stdio.h>
int main()
{
    double s,u,t,a;
    scanf("%lf %lf %lf",&u,&t,&a);
    s=(u*t)+((.5)*(a*t*t));
    printf("%.2lf\n",s);
    return 0;
}
