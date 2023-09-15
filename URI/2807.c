#include<stdio.h>
int main()
{
    int a,b=1,c=1,d=1,ar[50],i;
    scanf("%d",&a);
    if(a==1) printf("1\n");
    else if(a==2) printf("1 1\n");
    else
    {
        for(i=0;i<a;i++)
        {
            d=b+c;
            ar[i]=d;
            b=c;
            c=d;
            d++;
        }
        for(i=a-3;i>=0;i--)
            printf("%d ",ar[i]);
        printf("1 1\n");

    }
}
