#include<stdio.h>
int main()
{
    int i,n,a,s,j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
       for(j=1;j*j<=a;j++)
       {
           if(a%j==0)
           {
               if(j==a/j) c+=1;
           }
           else c+=2;
           printf("%d",c);
       }


    }
    return 0;
}



