#include<stdio.h>
int main()
{
    int i,ar[5],b;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter index: ");
    scanf("%d",&b);
    printf("Value at index %d is %d",i,ar[b]);
    return 0;
}
