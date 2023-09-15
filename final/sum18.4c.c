#include<stdio.h>
int main()
{
    int a[5],x,y,i,k;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d %d",&x,&y);
    for(i=0;i<5;i++)
    {
        if(a[i]%2!=0&&a[i]<x)
          a[i]=a[i]*y;
         if(a[i]%2==0&&a[i]>y)
            a[i]=a[i]*x;
          printf("%d ",a[i]);
    }
}
