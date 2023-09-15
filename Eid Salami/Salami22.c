#include <stdio.h>
int main()
{
    int N,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
    printf("Input amount:");
    scanf("%d",&N);
    if(N >= 1000)
    {
        a= N/1000;
        N -= a*1000;
    }
    if(N >= 500)
    {
        b= N/500;
        N -= b*500;
    }
    if(N >= 100)
    {
        c = N/100;
        N -= c * 100;
    }
    if(N >= 50)
    {
        d = N/50;
        N -= d * 50;
    }
    if(N >= 20)
    {
        e = N/20;
        N -= e * 20;
    }
    if(N >= 10)
    {
        f = N/10;
        N -= f * 10;
    }
    if(N >= 5)
    {
        g = N/5;
        N -= g * 5;
    }
    if(N >= 2)
    {
        h = N /2;
        N -= h * 2;
    }
    if(N >= 1)
    {
        i = N;
    }

    printf("Total number of notes:\n");
    printf("1000: %d\n",a);
    printf("500: %d\n",b);
    printf("100: %d\n",c);
    printf("50: %d\n",d);
    printf("20: %d\n",e);
    printf("10: %d\n",f);
    printf("5: %d\n",g);
    printf("2: %d\n",h);
    printf("1: %d\n",i);

    return 0;

}

