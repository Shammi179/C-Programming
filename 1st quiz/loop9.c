#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("*");
        }
        printf("\n");
        for(k=5; k>=i; k--)
        {
            printf(" ");
        }
    }
    return 0;
}
