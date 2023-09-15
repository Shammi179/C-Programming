#include<stdio.h>
int main()
{
    int T,N,K,i,m,c,j,s,n,S;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&N,&K);
        c=0;
            n=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&m);
            if(m>=K)c++;
            else {S=m+;
            c++;
            s=m-K;
            s+=m;}
            if(s>=K)n++;
            else s+=m;
        }
        printf("Case %d: %d\n",i,c+n);
    }
    return 0;
}
