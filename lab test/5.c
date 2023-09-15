#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c&&b>c)
        printf("%d %d",a,b);
    else if(a>b&&a>c&&c>b)
        printf("%d %d",a,c);
        else if(b>c&&b>a&&c>b)
        printf("%d %d",b,c);
}
