#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Input a number:");
    scanf("%d",&n);
        if(n%10==0){
            printf("");
            n=n/10;}
            printf("In reverse:");

   while(n>0)
    {
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    return 0;
}
