#include<stdio.h>
int main()
{
    int n,i,j;
    printf("N= ");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]%3==0)
            A[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
