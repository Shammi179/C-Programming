#include<stdio.h>
int main()
{
    int t,r,s=0,i;
    while(scanf("%d",&t)){
    s=t;
   while(t!=0)
    {
        t=t/3;
        r=t%3;
        s+=t;
        t+=r;
    }
    printf("%d\n",s);
    }
    return 0;
}
