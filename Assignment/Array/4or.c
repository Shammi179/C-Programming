#include<stdio.h>
int main()
{
    int i,j,n;
    printf("N = ");
    scanf("%d",&n);
    int ar[n],rev[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        rev[j]=ar[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",rev[i]);
    }
    return 0;
}
