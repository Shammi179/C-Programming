#include<stdio.h>
int main()
{
    int t,i,r,r1;
    double n,l=0.0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %lf",&r,&n);
        if(n>l){l=n;
        r1=r;}
    }
    if(l>=8)
    printf("%d\n",r1);
    else
        printf("Minimum note not reached\n");
}

