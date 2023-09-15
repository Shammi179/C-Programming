#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
            s+=ar[i];
    }
    printf("%d\n",s);
    return 0;
}
