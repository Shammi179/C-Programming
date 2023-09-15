#include<stdio.h>
int main()
{
    int t,i,r,c,s,j;
    while(scanf("%d",&t)!=EOF){
            c=0;
    for(i=2;i*i<=t;i++)
    {
        if(t%i==0){
        c++;
        break;}
    }
    if(c>0) printf("Nada\n");
    else if(c==0)
    {
        while(t!=0)
        {
            r=t%10;
    s=0;
            for(j=2;j*j<=r;j++)
            {
                if(r%j==0)
                {s++;
                break;}
            }
            t=t/10;
        }
        if(s>0) printf("Primo\n");
        else if(s==0) printf("Super\n");
    }
    }
    return 0;
}
