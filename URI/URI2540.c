#include<stdio.h>
int main()
{
    int t,n,i;
    float c,s;
    while(scanf("%d",&t)!=EOF)
    {
        s=((float)t*2)/3.0;
        c=0.0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&n);
            if(n==1)
                c++;
        }
        if(c>=s) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }
}
