#include<stdio.h>
int main()
{
    int n,a,b,c,d;
    scanf("%d",&n);
    a=n/10;
    n=n%10;
    b=n/5;
    n=n%5;
    c=n/2;
    n=n%2;
    d=n/1;
    printf("Number of the notes : %d\n10 : %d\n5 : %d\n2 : %d\n1 : %d\n",a+b+c+d,a,b,c,d);
    return 0;
}
