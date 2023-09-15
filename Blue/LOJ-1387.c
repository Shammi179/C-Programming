#include<stdio.h>
int main()
{
    int t,i,j,sum,o,money;
    char s[50];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d",&o);
        getchar();
        printf("Case %d:\n",i);
        for(j=0; j<o; j++)
        {
            scanf("%s",s);
            if(s[0]=='d')
            {
                scanf("%d",&money);
                sum+=money;
            }
            else if(s[0]=='r')
                printf("%d\n",sum);
        }

    }

}
