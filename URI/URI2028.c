#include<stdio.h>
int mian()
{
    int s=0,a,i,j,k;
    while(scanf("%d",&a)!=EOF)
    {
        for(i=1;i<=a;i++)
        {
            printf("Caso %d: ",i);
            for(j=0;j<=a;j++)
            {
                for(k=0;k<=j;k++)
                    printf("%d ",k);
            }
        }
    }

}

