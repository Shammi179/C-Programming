#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,t,j;
    char s[100];
    while(scanf("%s",s)!=EOF)
    {
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%d",&n);
             printf("%c",s[n-1]);
        }
        printf("\n");
    }
    return 0;
}
