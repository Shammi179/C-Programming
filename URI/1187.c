#include<stdio.h>
int main()
{
    char a;
    double M[12][12],s=0.0;
    int i,j,c1=1,c2=10;
    scanf("%c",&a);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf",&M[i][j]);
    for(i=0;i<5;i++)
    {
        for(j=c1;j<=c2;j++)
            s+=M[i][j];
            c1++;
            c2--;
    }
    if(a=='S')printf("%.1lf\n",s);
            else if(a=='M') printf("%.1lf\n",s/30.0);
            return 0;
}
