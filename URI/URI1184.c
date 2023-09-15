#include<stdio.h>
int main()
{
    double sum=0.0,a[12][12];
    int i,j,c=1;
    char s[2];
    scanf("%s",s);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
        scanf("%lf",&a[i][j]);
    for(i=1;i<12;i++){
        for(j=0;j<c;j++)
        sum+=a[i][j];
        c++;}
    if(s[0]=='S')printf("%.1lf\n",sum);
    else if(s[0]=='M') printf("%.1lf\n",sum/66.0);
    return 0;

}
