#include<stdio.h>
int main()
{
    int n,i,j;
    printf("N= ");
    scanf("%d",&n);
    int A[n],B[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Array A: ");
    for(i=0;i<n;i++)
        {
            printf("%d ",A[i]);
        }
        printf("\n");
        for(i=0,j=n-1;i<n;i++,j--)
        {
            B[j]=A[i];
        }
        printf("Array B: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",B[i]);
        }
        return 0;

}
