#include<stdio.h>
int main()
{
    int l,r;
    while(scanf("%d %d",&l,&r)!=EOF)
    {
        if(l==0&&r==0) break;
        else printf("%d\n",l+r);
    }
    return 0;
}
