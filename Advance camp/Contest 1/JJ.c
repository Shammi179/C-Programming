#include<stdio.h>
int main()
{
    int n,i,r,s=0;
    while(scanf("%d",&n)){
    s=n;
    while(n!=0)
    {
        if(n%3==1) n=n+1;
        else if(n%3==2) n=n+2;
        else if(n%10==0) n=n+0;
        n=n/3;
        s+=n;
    }
    printf("%d\n",s);
    }
    return 0;
}
