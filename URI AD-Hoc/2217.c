#include<stdio.h>
int main()
{
    int n,t,i;
    long long int m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
    m=pow(9,n);
    printf("%d\n",m%10);
    }

}
