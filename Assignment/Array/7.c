#include<stdio.h>
int main()
{
    int i,s=0,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        s+=ar[i];
    }
    printf("%.1f\n",(float)s/n);
    return 0;
}
