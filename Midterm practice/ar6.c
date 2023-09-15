#include<stdio.h>
int main()
{
    int n,i,s=0,o=0;
    printf("N= ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
       if(a[i]%2==0)
            s+=a[i];
       else if(a[i]%2!=0)
            o+=a[i];
    }
    printf("Even=%d\nOdd= %d\n",s,o);
    return 0;
}
