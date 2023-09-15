#include<stdio.h>
int main()
{
    int d,u,t,s;
    scanf("%d %d %d",&d,&u,&t);
    s=u*t+5*t*t;
    if(s>d+5)
        printf("Hits a six\n");
    else if(s<d-15)
        printf("Not out\n");
    else printf("Out\n");
    return 0;
}
