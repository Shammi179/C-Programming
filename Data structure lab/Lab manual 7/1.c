#include<stdio.h>
float div(int a,int b)
{
    float r;
    r=a/(float)b;
    return r;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float result;
    result=div(a,b);
    printf("Result= %.1f\n",result);
}
