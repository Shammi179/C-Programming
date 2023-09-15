#include<stdio.h>
int main()
{
    int a,y,m,w,d;
    printf("Enter days: ");
    scanf("%d",&a);
    y=a/365;
    m=a%365;
    w=m/7;
    d=m%7;
    printf("%d days = %d year/s,%d week/s and %d day/s\n",a,y,w,d);
    return 0;
}
