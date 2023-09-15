#include<stdio.h>
int main()
{
    double v,d,a;
    while(scanf("%lf %lf",&v,&d)!=EOF){
    d=d/2;
    a=3.14*d*d;
    printf("ALTURA = %.2lf\nAREA = %.2lf\n",v/a,a);}
    return 0;
}
