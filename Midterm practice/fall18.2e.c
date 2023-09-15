#include<stdio.h>
int main()
{
    int a[10],i,j,r[10];
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0,j=0;i<10;i++)
    {
        if(a[i]>=3&&a[i]<=7){
        r[j]=a[i];
        j++;}
    }
    for(i=j-1;i>=0;i--)
        printf("%d ",r[i]);
    return 0;
}
