#include<stdio.h>
int main()
{
    int n,i,j,m,mn,im,imn;
    printf("N= ");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
     m=A[0];
     im=0;
    for(i=1;i<n;i++)
    {
        if(m<A[i])
        {
            im=i;
            m=A[i];
        }
    }
    printf("Max:%d,",m);
    printf("Index: %d",im);
    mn=A[0];
    imn=0;
    for(i=1;i<n;i++)
    {
        if(mn>A[i])
        {
            imn=i;
            mn=A[i];
        }
    }
    printf("\nMin: %d,",mn);
    printf("Index: %d",imn);

    return 0;
}


