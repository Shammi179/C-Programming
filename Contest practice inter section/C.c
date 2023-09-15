#include<stdio.h>
int main()
{
    int n,i,m,a[2],r[2],j;
    scanf("%d",&n);
    for(i=0;i<2;i++)
    {
        m=n%10;
        n=n/10;
        a[i]=m;
    }
    for(j=0,i=1;j<2;j++,i--)
    {
        r[j]=a[i];
        printf("%d",r[j]);
        if(j==0)
            printf(" ");
        else printf("\n");
    }
    return 0;
}
