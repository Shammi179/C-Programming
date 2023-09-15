#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Input upper limit: ");
    scanf("%d",&a);
    printf("\n\nInput lower limit: ");
    scanf("%d",&b);
    if(a%2==0)
    {
        printf("Even numbers from %d to %d:\n%d",a,b,a);
        for(i=a+2; i<=b;i=i+2)
            printf(",%d",i);
    }
    else if(a%2!=0)
    {
        printf("Even numbers from %d to %d:\n%d",a,b,a+1);
        a++;
        for(i=a+2; i<=b;i=i+2)
            printf(",%d",i);
    }
    return 0;
}
