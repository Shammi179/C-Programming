#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Start year: ");
    scanf("%d",&a);
    printf("End year: ");
    scanf("%d",&b);
    for(i=a; i<=b; i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
            printf("%d, ",i);
    }
    printf("\b\b ");

    return 0;

}
