#include<stdio.h>
int main()
{
    int n,i,j;
    printf("N = ");
    scanf("%d",&n);
    int a[n],r[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
        r[j]=a[i];
    for(i=0;i<n;i++)
        printf("%d ",r[i]);
    return 0;
}
