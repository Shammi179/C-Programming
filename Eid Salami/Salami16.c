#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b&&a<=c) printf("%d\n",a);
    if(a<=b&&a>=c) printf("%d\n",a);
    else if(b>=a&&b<=c) printf("%d\n",b);
    else if(b<=a&&b>=c) printf("%d\n",b);
    else printf("%d\n",c);
    return 0;

}
