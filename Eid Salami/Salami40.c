#include<stdio.h>
int main()
{
    int n,s=1,r;
    printf("Input Number: ");
    scanf("%d",&n);
    for(;n>0;)
    {
        r=n%10;
        s*=r;
        n=n/10;
    }
    printf("Product of Digits = %d\n",s);
    return 0;
}
