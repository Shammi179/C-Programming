#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum,p=5;
    float avg;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=(a+b+c+d+e);
    avg=sum/(float)p;
    printf("Average=%f",avg);
    return 0;

}
