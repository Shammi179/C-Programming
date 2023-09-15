#include<stdio.h>
int main()
{
    int r,c,i,j,k=1;
    printf("Input rows: ");
    scanf("%d",&r);
    printf("Input columns: ");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",k);
            k++;

        }
        printf("\n");
    }
    return 0;
}

