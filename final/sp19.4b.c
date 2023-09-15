#include<stdio.h>
int main()
{
    int n,i,r,s=0;
    scanf("%d",&n);
    for(i=1;n!=0;)
    {
        r=n%10;
        if(r%2!=0)
        {
            s=r*i+s;
            i*=10;
        }
        n=n/10;
    }
    printf("%d",s);
}
