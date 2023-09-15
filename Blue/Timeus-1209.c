#include<stdio.h>
int main()
{
    int t;
    long long int i,j,n,s;
    scanf("%d",&t);
    if(t==1)
    {
        scanf("%d",&n);
        printf("0\n");
    }
        else
        {
            for(i=1; i<t; i++)
            {
                scanf("%d",&n);
                for(j=2;; j++)
                {
                    s=(j*(j-1))/2+1;
                    if(s==n)
                    {
                        printf(" 1");
                        break;
                    }
                }
                printf("\n");
            }
        }

}
