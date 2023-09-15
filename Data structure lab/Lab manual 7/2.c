#include<stdio.h>
int area(int r)
{
    float a,p=3.1416;
    a=p*r*r;
    return a;
}
int main()
{
    int r;
    scanf("%d",&r);
    float result=area(r);
    printf("Area= %.2f\n",result);

}
