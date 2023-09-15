#include<stdio.h>
int main()
{
    char a;
    double M[12][12],s=0;
    int i,j,m=11;
    scanf("%c",&a);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);}
    }
    for(i=1;i<12;i++)
    {
        for(j=m;j<12;j++)
        {
            s+=M[i][j];
        }
        m--;
    }
    if(a=='S') printf("%.1lf\n",s);
    else if(a=='M') printf("%.1lf\n",s/66.0);
    return 0;
}
