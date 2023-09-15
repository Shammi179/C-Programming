#include<stdio.h>
int main()
{
    int T,n,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        if(n>10)
            printf("10 %d\n",n-10);
        else printf("%d 0\n",n);
    }
    return 0;
}
