#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>a) printf("TLE\n");
    else printf("NOT TLE\n");
    return 0;
}
