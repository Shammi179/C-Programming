#include<stdio.h>
int main()
{
    int i,n,m,s=0;
    scanf("%d %d",&n,&m);
    if(n%2==0)n=n+1;
    for(i=n;i<=m;i+=2)
        s+=i;
        printf("%d",s);


}
