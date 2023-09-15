#include<stdio.h>
int main()
{
    int t,s;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        else
        {
            s=(t*(t+1)*((2*t)+1))/6;
            printf("%d\n",s);
        }
    }
}
