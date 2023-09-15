#include<stdio.h>
 int sum(int,int);
 float sub(float,float);
int main()
{
    printf("SUM = %d\n",sum(5,6));
    sub (4.5 ,6.7);
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}
float sub(float x,float y)
{
    float sub= x-y;
    printf("SUB = %.3f\n",sub);
}
