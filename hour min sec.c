#include <stdio.h>


int main()
{
    int N,hour,min,sec;
    printf("enter the value of second,N:");
    scanf("%d",&N);
    hour=N/3600;

    min=N/60;
    sec=N%60;
    printf("hour:%d\n min:%d\nsec:%d\n",hour,min,sec);
    return 0;
}
