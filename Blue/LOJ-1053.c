#include<stdio.h>
int main()
{
    int t,n,a,b,c,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        printf("Case %d: ",i);
        if(a>b&&a>c)
        {
            if((a*a)==(b*b)+(c*c))
                printf("yes\n");
            else printf("no\n");
        }
        else if(b>a&&b>c)
        {
            if((b*b)==(a*a)+(c*c))
                 printf("yes\n");
            else printf("no\n");
        }
        else if(c>a&&c>b)
        {
            if((c*c)==(a*a)+(b*b))
                printf("yes\n");
            else printf("no\n");
        }

    }
}
