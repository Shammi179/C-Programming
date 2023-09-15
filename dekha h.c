#include<stdio.h>
int main()
{
    int z;
    scanf("%d",&z);
    if(z%2==0)
    {
        printf("The number is even");
    }
    else if(z%2!=0)
    {
        printf("The number is odd");
    }
    return 0;
}
