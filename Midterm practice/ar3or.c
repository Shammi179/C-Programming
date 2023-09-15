#include<stdio.h>
int main()
{
    int a[5],i,n,m;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Old array: ");
    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\nEnter index: ");
    scanf("%d",&n);
    printf("New value: ");
    scanf("%d",&m);
    printf("\nNew array : ");
    for(i=0;i<5;i++)
    {
        a[n]=m;
        printf("%d ",a[i]);
    }
}
