#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double mx,mn;
    scanf("%d",&n);
    mx=n/(log(n));
    mn=mx*1.25506;
    printf("%.1lf %.1lf\n",mx,mn);
}
