#include<stdio.h>
int main()
{
    int t,h,d,b,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&h,&d,&b);
        if(h>=200&&h<=300&&d>=50&&b>=150) printf("Sim\n");
        else printf("Nao\n");
    }
}
