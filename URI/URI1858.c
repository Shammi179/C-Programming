#include<stdio.h>
int main()
{
    int n,i,l=21,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int t;
        scanf("%d",&t);
        if(t<l){
            l=t;
            m=i;}
    }
    printf("%d\n",m);

return 0;
}
