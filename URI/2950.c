#include<stdio.h>
int main()
{
    int x,y,z,s;
    double r;
    scanf("%d %d %d",&x,&y,&z);
    s=y+z;
    r=(float)x/(float)s;
    printf("%.2lf\n",r);
    return 0;
}
