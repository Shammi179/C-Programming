#include<stdio.h>
int main()
{
    int a,b,c,r;
    while(scanf("%d %d",&a,&b))
    {
        if(a==0&&b==0) break;
        else
        {
            r=b-a;
            c=a-r;
            printf("%d\n",c);
        }
    }
}
