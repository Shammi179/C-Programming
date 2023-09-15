#include<stdio.h>
int main()
{
    int n,s[500],i,c,l;
    while(scanf("%d",&n)!=EOF)
    {
        l=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
        }
        for(i=0; i<n; i++)
        {
            if(s[i]>l) l=s[i];
        }
        if(l<10) printf("1\n");
        else if(l>=10&&l<20) printf("2\n");
        else if(l>=20)  printf("3\n");
    }

}
