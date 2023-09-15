#include<stdio.h>
float m(float a,float b)
{
    return (a+b)/2;
}
int main()
{
    float a,b,r;
    scanf("%f %f",&a,&b);
    r=m(a,b);
    printf("%.2f\n",r);
}
