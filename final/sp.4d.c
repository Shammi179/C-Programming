#include<stdio.h>
int main()
{
    int source[8],destination[8],i,j;
    for(i=0;i<8;i++)
        scanf("%d",&source[i]);
        for(i=7,j=0;i>=0,j<8;i--,j++)
            destination[j]=source[i];
        printf("destination:");
        for(j=0;j<8;j++)
            printf("%d ",destination[j]);
}
