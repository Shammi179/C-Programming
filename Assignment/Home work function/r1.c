#include<stdio.h>
int fact(int n)
{
    int p;
    if(n==1) return 1;
    else p= n*fact(n-1);
    return p;
}
int main()
{
    int f=fact(4);
    printf("Factorial is: %d\n",f);
    return 0;
}
