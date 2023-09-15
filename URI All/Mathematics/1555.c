#include<stdio.h>
int main()
{
    int t,i,x,y,s1,s2,s3;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&x,&y);
        s1=(9*x*x)+(y*y);
        s2=(2*x*x)+(25*y*y);
        s3=(-100*x) +(y*y*y);
        if(s1>s2&&s1>s3) printf("Rafael ganhou\n");
        else if(s2>s1&&s2>s3) printf("Beto ganhou\n");
        else if(s3>s1&&s3>s2) printf("Carlos ganhou\n");
    }
}
