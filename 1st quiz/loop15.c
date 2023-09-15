#include<stdio.h>
int main()
{
    char i,j,n,k;
    scanf("%c",&n);
    for(i='A';i<=n;i++)
    {
        for(j=i;j<=n;j++)
            printf(" ");
        for(k='A';k<=i;k++)
           {printf("%c ",k);

           }
           k++;
            printf("\n");
    }
    return 0;
}
