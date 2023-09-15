#include<stdio.h>
int main()
{
    int n,e=0,o=0,m;
    printf("Input a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        if(m%2!=0)
            o++;
        else if(m%2==0)
            e++;
        n=n/10;
    }
    printf("Even: %d\nOdd: %d\n",e,o);
    return 0;
}
