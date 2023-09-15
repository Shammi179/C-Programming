#include<stdio.h>
int main()
{
    int a,i;
    double ss=3,o=1,s=6,c,m;
    scanf("%d",&a);
    c=ss+(o/s);
    m=o/s;
    if(a==0)printf("%.10lf\n",ss);
    else if(a==1) printf("%.10lf\n",c);
    else{
    for(i=2;i<=a;i++)
    {
       m*=6;
       m+=(s+(o/s));
    }
    printf("%.10lf",ss+(1/m));
    }
}
