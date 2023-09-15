#include<stdio.h>
int main()
{
    int N[20],R[20],i,j;
    for(i=0,j=19; i<20,j>=0; i++,j--)
    {
        scanf("%d",&R[i]);
        N[j]=R[i];
    }
    for(i=0;i<20;i++)
    {
         printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;

}
