#include<stdio.h>
int main()
{
    int a,n,r,s,i;
    while(scanf("%d %d",&a,&n)!=EOF)
    {
        s=0;
        for(i=0;i<a;i++)
        {
        r=n%10;
        s+=r;
        n=n/10;
        }
        printf("%d ",s);
        if(s%3==0) printf("sim\n");
        else if(s%3!=0) printf("nao\n");
    }
}
