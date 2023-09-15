#include<stdio.h>
int main()
{
    int t,n,i,j;
    scanf("%d %d",&t,&n);
    int r[t][n];
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&r[i][j]);
        }
    }
    for(i=0;i<t;i++)
    {
        if(i%2!=0) {
            for(j=n-1;j>=0;j--)
            printf("%d ",r[i][j]);}
        else{
        for(j=0;j<n;j++)
        printf("%d ",r[i][j]);}
    }
    printf("\n");
    printf("\b \b");
}
