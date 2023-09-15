#include<stdio.h>
int main()
{
    int a,b,i,s=0;
    printf("Input Upper limit: ");
    scanf("%d",&a);
    printf("Input Lower limit: ");
    scanf("%d",&b);
    if(a%2!=0)
    {
        for(i=a;i<=b;i=i+2)
        {
            s+=i;
        }
        printf("Sum of all Odd Number between\n%d to %d = %d",a,b,s);

    }
    else if(a%2==0)
    {
        a++;
        for(i=a;i<=b;i=i+2)
        {
            s+=i;
        }
        printf("Sum of all Odd Number between\n%d to %d = %d",a-1,b,s);

    }
    return 0;
}
