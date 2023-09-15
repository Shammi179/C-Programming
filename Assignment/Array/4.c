#include<stdio.h>
int main()
{
    int ar[5],rev[5],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0,j=4;i<5;i++,j--)
    {
        rev[j]=ar[i];
    }
    for(j=0;j<5;j++)
    {
        printf("%d ",rev[j]);
    }
    return 0;
}
