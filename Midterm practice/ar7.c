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
       s+=a[i];
    }
    printf("%.2f\n",(float)s/n);
    return 0;
}
