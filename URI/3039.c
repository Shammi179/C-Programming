#include<stdio.h>
int main()
{
    int t,i,m=0,f=0;
    char s1[1000],s2[1000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        getchar();
        scanf("%s %s",s1,s2);
        if(s2[0]=='F') f++;
        else if(s2[0]=='M') m++;
    }
    printf("%d carrinhos\n",m);
    printf("%d bonecas\n",f);
}
