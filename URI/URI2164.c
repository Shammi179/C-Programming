#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    double x=2.23606797749979,y,z,y1,z1,f;
    y=(1+x)/2;
    z=(1-x)/2;
    y1=pow(y,a);
    z1=pow(z,a);
    f=(y1-z1)/x;
    printf("%.1lf\n",f);

}
