#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c&&b>c) printf("%d %d",a,b);
    else if(a>b&&a>c&&c>b) printf("%d %d",a,c);
    else if(b>a&&b>c&&c>a) printf("%d %d",b,c);
    else if(c>a&&c>b&&b>a) printf("%d %d\n",c,b);
    else if(c>a&&c>b&&a>b) printf("%d %d\n",c,a);
    else if(b>a&&b>c&&a>c) printf("%d %d\n",b,a);
    return 0;
}


