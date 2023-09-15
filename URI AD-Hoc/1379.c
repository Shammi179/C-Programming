#include<stdio.h>
int main()
{
    int a,b,c,s,r,i;
    while(scanf("%d %d",&a,&b))
    {
        if(a==0&&b==0) break;
        else
        {
            if(a>b) c=a;
            else if(b>a) c=b;
            for(i=-c;i<=c;i++)
            {
                r=(a+b+i)%3;
                s=(a+b+i)/3;
                if(r==0&&(s==a||s==b))
                    printf("%d\n",i);
            }
        }
    }
}
