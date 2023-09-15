#include<stdio.h>
int main()
{
    long double a;
    scanf("%LE",&a);
    if(a>0.0)
    printf("+%.4LE\n",a);
    else printf("%.4LE\n",a);
}
