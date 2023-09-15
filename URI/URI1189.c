#include<stdio.h>
int main()
{
    double sum=0.0,a[12][12];
    int i,j,r1=1,r2=10;
    char s[2];
    scanf("%s",s);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
        scanf("%lf",&a[i][j]);
        for(i=0;i<=10;i++){
            for(j=r1;j<=r2;j++)
                sum+=a[j][i];
                r1++;
                r2--;

            }
            if(s[0]=='S')printf("%.1lf\n",sum);
            else if(s[0]=='M') printf("%.1lf\n",sum/30.0);
            return 0;
}

