#include<stdio.h>
int main()
{
    int i,n;
    n=12;
    for(i=1;i<=n;i++)
    {
        if(i%2)
            continue;
        else i++;
        printf("\n i = %d",i);
        if(i==10)
            break;
    }
}
