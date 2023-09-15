#include<stdio.h>
int main()
{
    int i,t;
    double c,m;
    while(scanf("%d",&t)!=EOF)
    {
        m=12.0;
        for(i=0;i<t;i++)
        {
            scanf("%lf",&c);
            if(c<m)
                m=c;
        }
        printf("%.2lf\n",m);
    }
}
