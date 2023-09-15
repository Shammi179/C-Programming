#include<stdio.h>
int main()
{
    int n,i;
    printf("N = ");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("myarray[%d] =%d\n",i,num[i]);
    }
    return 0;
}
