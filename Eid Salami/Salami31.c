#include<stdio.h>
int main()
{
    int n,s=0,r;
    printf("Input Any Number: ");
    scanf("%d",&n);
    for(;n>0;)
    {
        r=n%10;
        s+=r;
        n=n/10;
    }
    printf("Sum of Digits = %d\n",s);
    return 0;
}
