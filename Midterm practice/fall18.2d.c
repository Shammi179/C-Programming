#include<stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%4==0)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
