#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("N= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<0) a[i]=0;
        s+=a[i];
    }
    printf("Sum of all positive integers: %d\n",s);
}
