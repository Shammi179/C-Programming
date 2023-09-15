#include<stdio.h>
int main()
{
    double i,j,k;
    int a,b;
    for(i=0;i<=2;i=i+0.2)
    {
        for(k=1;k<=3;k++)
        {
            j=i+k;
            a=i;
            b=j;
            if(i>0 && i<1 || i>1 && i<2)
            {
                printf("I=%.1lf J=%.1lf\n",i,j);
            }
            else
            {
                printf("I=%d J=%d\n",a,b);
            }
        }
    }
}


