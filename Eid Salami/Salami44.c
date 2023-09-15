#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Input rows: ");
    scanf("%d",&r);
    printf("Input columns: ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("1");
        }
        printf("\n");
    }
    return 0;
}
