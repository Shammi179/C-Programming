#include<stdio.h>
int main()
{
    int a1,t1,a2,t2,mr,ms;
    scanf("%d %d %d %d",&a1,&t1,&a2,&t2);
    mr=a1*t1;
    ms=a2*t2;
    if(mr>ms)
        printf("Mustafizur Rahman\n");
    else
        printf("Mitchell Starc\n");
    return 0;
}
