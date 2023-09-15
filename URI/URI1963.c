#include<stdio.h>
int main()
{
    double o,n;
    scanf("%lf %lf",&o,&n);
    printf("%.2lf%%\n",((n-o)/o)*100);
    return 0;
}
