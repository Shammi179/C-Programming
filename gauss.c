#include<stdio.h>
int main()
{
    int i,n,a,b,c,s,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=0;
        scanf("%d %d %d",&a,&b,&c);
        for(j=a;j<=c;j=j+(b-a))
            s+=j;
            printf("%d\n",s);
    }
}
