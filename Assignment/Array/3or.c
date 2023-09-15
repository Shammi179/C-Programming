#include<stdio.h>
int main()
{
    int i,ar[5],n,m;
    for(i=0; i<5; i++)
    {
       scanf("%d",&ar[i]);
    }
    printf("Old array: ");
        for(i=0; i<5; i++)
        {
            printf("%d ",ar[i]);
        }
        printf("\nEnter index: ");
        scanf("%d",&m);
        printf("New value : ");
        scanf("%d",&n);
        printf("New array: ");
        for(i=0;i<5;i++)
        {
            ar[m]=n;
            printf("%d ",ar[i]);
        }
        return 0;
}
