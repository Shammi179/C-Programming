#include<stdio.h>
int main()
{
    double a[12][12],s=0;
    char c;
    scanf("%c",&c);
    int i,j,m=10;
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
            scanf("%lf",&a[i][j]);
    }
    for(i=0;i<11;i++)
    {
        for(j=0;j<=m;j++)
            s+=a[i][j];
            m--;
    }
    if(c=='S')
    printf("%.1lf\n",s);
    else if(c=='M')
        printf("%.1lf\n",s/66.0);
}
