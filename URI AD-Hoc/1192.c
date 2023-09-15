#include<stdio.h>
int main()
{
    int t,i,a,b,j;
    char c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %c %d",&a,&c,&b);
        if(a==b) printf("%d\n",a*b);
        else if(a!=b&&c>='A'&&c<='Z') printf("%d\n",b-a);
        else if(a!=b&&c>='a'&&c<='z') printf("%d\n",a+b);
    }
    return 0;
}
