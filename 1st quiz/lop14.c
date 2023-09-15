#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf("%d ",i);
         printf("\n");
        for(k=1;k<=i;k++)
            printf(" ");
    }
    return 0;
}
