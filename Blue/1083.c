#include<stdio.h>
int main()
{
    int n,s=1,i,l;
    char c[30];
    scanf("%d",&n);
    getchar();
    scanf("%s",c);
    l=strlen(c);
    for(i=n;i>0;i-=l)
    {
        s*=i;
    }
    printf("%d\n",s);
}
