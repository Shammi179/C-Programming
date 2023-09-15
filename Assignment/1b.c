#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=100;i>=1;i--)
    {
        s+=i;
    }
    printf("Sum = %d\n",s);
    return 0;
}
