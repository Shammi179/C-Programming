#include<stdio.h>
int main()
{
    int n,i,m,a[5],b[5],c[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
   for(i=0;i<5;i++)
   {
       c[i]=a[i];
   }
   for(i=0;i<5;i++)
   {
       a[i]=b[i];
   }
 printf("Array A: ");
 for(i=0;i<5;i++)
 {
     printf("%d ",a[i]);
 }
 printf("Array B: ");
 for(i=0;i<5;i++)
 {
     printf("%d ",c[i]);
 }
 return 0;
}


