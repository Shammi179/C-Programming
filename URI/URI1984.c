#include<stdio.h>
int main()
{
    long long unsigned int a;
    int r;
    scanf("%llu",&a);
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        printf("%d",r);
    }
    printf("\n");
}
