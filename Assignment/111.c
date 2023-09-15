#include<stdio.h>
int main()
{
    int a,b;
    char c;
    for(;c!='N';)
    {
        scanf("%d %d",&a,&b);
        printf("Multiplication = %d\n",a*b);
        scanf("%c",&c);
    }
    return 0;
}
