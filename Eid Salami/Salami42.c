#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    printf("Enter First Integer: ");
    scanf("%d",&a);
    printf("Enter Second Integer: ");
    scanf("%d",&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            gcd=i;
    }
    printf("GCD of %d and %d = %d",a,b,gcd);
    return 0;
}
