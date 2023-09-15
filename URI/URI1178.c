#include<stdio.h>
int main()
{
    double y;
    int i,n[100];
    scanf("%lf",&y);
    for(i=0;i<100;i++)
    {
        n[0]=y;
        printf("N[%d] = %.4lf\n",i,y);
        y=y/2;
    }
    return 0;
}
