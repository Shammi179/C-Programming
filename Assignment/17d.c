#include<stdio.h>
int main()
{
    int i,n,j,c,s;
    printf("Input Limit : ");
    scanf("%d",&n);
    printf("Prime numbers between 2-%d:\n",n);
    for(i=2;i<n;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("%d, ",i);
        }

    }
    printf("\b\b ");
    printf("\n");
    return 0;
}

