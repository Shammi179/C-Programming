#include<stdio.h>
int main()
{
    double s=0,m;
    int t,n,a,i;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d",&n,&a);
        if(n==1001)
        {
            m=1.50*a;
            s+=m;
        }
        else if(n==1002)
        {
            m=2.50*a;
            s+=m;
        }
        else if(n==1003)
        {
            m=3.50*a;
            s+=m;
        }
        else if(n==1004)
        {
            m=4.50*a;
            s+=m;
        }
        else if(n==1005)
        {
            m=5.50*a;
            s+=m;
        }
    }
    printf("%.2lf\n",s);
}
