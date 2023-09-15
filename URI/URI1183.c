#include<stdio.h>
int main()
{
    double m[12][12],s=0.0;
    int i,j,n=1;
    char c;
    scanf("%c",&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++)
        scanf("%lf",&m[i][j]);}
    for(i=0;i<11;i++){
        for(j=n;j<12;j++)
        s+=m[i][j];
        n++;}
    if(c=='S')printf("%.1lf\n",s);
    else if(c=='M')printf("%.1lf\n",s/66.0);
    return 0;
}
