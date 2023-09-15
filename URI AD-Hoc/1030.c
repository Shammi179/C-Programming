#include<stdio.h>
int main()
{
    int i,j,n,k,c,t,l,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&k);
        int ar[n],ar1[n];
        for(b=0,a=1;b<n,a<=n;b++,a++)
        {
            ar[b]=a;
        }
        c=0;
        for(j=0,l=0;;j+=k,l++)
        {
            if(ar[j]!=0)
            {
                 ar1[l]=ar[j];
                 ar[j]=0;
                 c++;
            }

        }
        printf("Case %d: %d\n",i,ar[c]);
    }
}
