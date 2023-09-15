#include<stdio.h>
int main()
{
    int n,i,s=1;
    printf("Input Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    printf("Factorial of %d is: %d",n,s);
    return 0;
}
