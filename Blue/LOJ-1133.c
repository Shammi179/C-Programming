#include<stdio.h>
int main()
{
    int i,j,k,l,s,d,m,y,z,t,n,a,b,e,v;
    char c[10];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&n,&m);
        int ar[n+10];
        for(j=0; j<n; j++)
        {
            scanf("%d",&ar[j]);
        }
        for(k=0; k<m; k++)
        {
            scanf("%s",c);
            if(c[0]=='S')
            {
                scanf("%d",&d);
                for(a=0;a<n;a++)
                    ar[a]+=d;
            }
            if(c[0]=='M')
            {
               scanf("%d",&d);
                for(a=0;a<n;a++)
                    ar[a]*=d;
            }
            if(c[0]=='D')
            {
                 scanf("%d",&d);
                for(a=0;a<n;a++)
                    ar[a]/=d;
            }
            if(c[0]=='P')
            {
                int temp;
                scanf("%d %d",&y,&z);
                temp=ar[y];
                ar[y]=ar[z];
                ar[z]=temp;
            }
            if(c[0]=='R')
            {
                int ar2[n];
                for(b=0,e=n-1;b<n,e>=0;b++,e--)
                    ar2[b]=ar[e];
                    for(b=0;b<n;b++)
                        ar[b]=ar2[b];
            }

        }
        printf("Case %d:\n",i);
        printf("%d",ar[0]);
        for(v=1;v<n;v++)
            printf(" %d",ar[v]);
            printf("\n");
    }
}
