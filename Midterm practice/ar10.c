#include<stdio.h>
int main()
{
    int a[5],i,n;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Search: ");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==a[i])
            printf("Found at index %d ",i);
    }
}
