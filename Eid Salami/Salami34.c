#include<stdio.h>
int main()
{
    int a,r,s=0;
    printf("Input Number: ");
    scanf("%d",&a);
    for(;a>0;)
    {
        r=a%10;
        s+=1;
        a=a/10;
    }
    printf("Number of Digits: %d",s);
    return 0;
}
