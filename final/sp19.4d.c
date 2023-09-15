#include<stdio.h>
int main()
{
    int a[10],i,s1,s2;
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        s1=a[0]+a[1];
        s2=a[8]+a[9];
    }
    printf("%d %d",s1,s2);
}
