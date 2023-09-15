#include<stdio.h>
void blue(int *a,int *b)
{
    int x;
    x=*a+*b;
    *b=*a;
    *a=x;
}
void black(int a,int b)
{
    blue(&a,&b);
    printf("\n %d %d",a,b);
}
int main()
{
    int a=12,b=13;
    black(a,b);
    printf("\n %d %d",a,b);
    return 0;
}
