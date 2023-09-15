#include<stdio.h>
int main()
{
    int i,j,k,l;
    char x;
    double M[12][12],sum=0;
    scanf("%d %c",&k,&x);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
        scanf("%lf",&M[i][j]);}}
    for(i=0;i<12;i++)
       sum+=M[i][k];
    if(x=='S')
        printf("%.1lf\n",sum);
    else if(x=='M')
        printf("%.1lf\n",sum/12.0);
    return 0;
}
