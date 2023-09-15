#include<stdio.h>
int main()
{
    int a,i,r,c=0;
    scanf("%d",&a);
    while (a!=0)
    {
        r=a%10;
        c++;
        a=a/10;
    }
    printf("%d\n",c);
}
