#include<stdio.h>
int main()
{
    int a,b,i,lcm;
    printf("Enter First Integer: ");
    scanf("%d",&a);
    printf("Enter Second Integer: ");
    scanf("%d",&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            lcm=i;
    }
    printf("LCM of %d and %d = %d",a,b,(a*b)/lcm);
    return 0;
}

