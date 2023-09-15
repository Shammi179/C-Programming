#include<stdio.h>
int r(int n)
{
    printf("%d\n",n);
    if(n<10){
        n++;
        r(n);}
    if(n==11)
        return 0;
}
int main()
{
    int a=1;
    r(a);
}
