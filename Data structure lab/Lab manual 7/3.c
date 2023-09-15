#include<stdio.h>
int main()
{
    int n,i,l=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>l)
        {l=a[i];
        a[i]=0;}
    }
    printf("%d ",l);
    l=0;
    for()


}
