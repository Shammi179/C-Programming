#include<stdio.h>
int main()
{
    int a,b,s;
    char c;
    scanf("%d %d %c %d",&s,&a,&c,&b);
    if(c=='+')
    {a=a+b;
    if(a<=s) printf("OK\n");
    else if(a>s) printf("OVERFLOW\n");}
    else if(c=='*')
    {a=a*b;
    if(a<=s) printf("OK\n");
    else if(a>s) printf("OVERFLOW\n");}
}
