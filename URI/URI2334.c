#include<stdio.h>
int main()
{
    unsigned long long int a;
    while(1)
    {
        scanf("%llu",&a);
    if(a==-1) break;
    else if(a==0)
            printf("0\n");
        else
        printf("%llu\n",a-1);
    }
}
