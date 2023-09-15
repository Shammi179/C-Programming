#include<stdio.h>
int main()
{
    int n1[10][10],n2[10][10],i,j,k,r1,c1,r2,c2,sum=0,m[10][10];
    printf("Enter  row and column of 1st matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("\nEnter  row and column of 2nd matrix: ");
    scanf("%d %d",&r2,&c2);
    while(c1!=r2)
    {
        printf("Error!!\n");
        printf("Enter  row and column of 1st matrix: ");
        scanf("%d %d",&r1,&c1);
        printf("\nEnter  row and column of 2nd matrix: ");
        scanf("%d %d",&r2,&c2);
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            scanf("%d",&n1[i][j]);
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            scanf("%d",&n2[i][j]);
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            {
                for(k=0;k<c1;k++){
                sum+=n1[i][k]*n2[k][j];
            }
             m[i][j]=sum;
                sum=0;}
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d ",m[i][j]);
            printf("\n");
    }
}
