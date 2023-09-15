#include<stdio.h>
int main()
{
    int a,b,mx,mn;
    printf("Enter numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        mx=a;
        mn=b;
        printf("Max = %d\nMin = %d",mx,mn);
    }
    else
    {
        mx=b;
        mn=a;
        printf("Max = %d\nMin = %d",mx,mn);
    }
}
