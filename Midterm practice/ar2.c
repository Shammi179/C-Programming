#include<stdio.h>
int main()
{
    int n,i;
    printf("N=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("myarray[%d] = %d\n",i,a[i]);
    }
    return 0;
}
