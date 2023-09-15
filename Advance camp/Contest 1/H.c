#include<stdio.h>
int main()
{
    int i,j,a,b,d,t,k;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d %d",&a,&b);
        d=0;
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
                if(i%3==0&&j%3==0)
                    d++;
        }
        printf("%d\n",d);
    }
    return 0;
}
