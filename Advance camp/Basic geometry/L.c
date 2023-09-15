#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double pi=3.1416,abc,at,asc,r;
    r=(float)c/2.0;
    abc=pi*r*r;
    at=((float)a*b)/2.0;
    asc=(a+b-c);
    r=asc/2;
    asc=pi*r*r;
    abc=abc-at;
    at=at-asc;
    printf("%.4lf %.4lf %.4lf\n",abc,at,asc);
    return 0;
}
