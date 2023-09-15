#include<stdio.h>
#include<string.h>
int main()
{
    int T,n,k,c,i,j,cn,l,m,w;
    char nm[50],mn[50];
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d",&n,&k,&c);
        w=0;
        for(l=0; l<n; l++)
        {
            cn=0;
            for(j=0; j<k; j++)
            {
                scanf("%s",nm);
                if(j==0)
                    strcpy(mn,nm);
                else
                {
                    m=strcmp(mn,nm);
                    if(m==0)
                        cn+=0;
                    else
                        cn=1;
                }
            }
            if(cn==0)
                w++;
        }
        printf("At Machine %d Jackpots won %d times and cost is %d credits.\n",i,w,n*c);
    }
    return 0;
}
