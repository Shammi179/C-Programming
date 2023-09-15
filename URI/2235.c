#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==c||b==c||a==b||b+c==a||a+b==c||a+c==b)
        printf("S\n");
    else printf("N\n");
    return 0;
}
