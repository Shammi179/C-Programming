#include<stdio.h>
int main()
{
    int i,a,b,s1,p1;
    double s,p;
    scanf("%d %d",&a,&b);
    s=(float)a*b;
    s1=a*b;
    for(i=10;i<=90;i+=10)
    {
        p=(s*i)/100.00;
        p1=(s*i)/100;
        if(p1==p)
        printf("%d ",p1);
        else if(p>p1) printf("%d ",p1+1);
    }
    printf("\b \b");
    printf("\n");
}
