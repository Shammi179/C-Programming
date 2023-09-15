#include<stdio.h>
int main()
{
    int a,r,sum=0,n;
    printf("Input Nmuber: ");
    scanf("%d",&a);
    printf("%d",a);
    n=a;
    for(;n>0;)
    {
       r=n%10;
       sum=sum*10+r;
       n=n/10;
    }
    if(sum==a) printf(" is Palindrome\n");
    else printf(" is not Palindrome\n");
    return 0;
}
