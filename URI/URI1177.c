#include<stdio.h>
int main()
{
    int t,i,j=0,N[1000];
    scanf("%d",&t);
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if(t==j)
        j=0;
    }
    return 0;
}
