#include<stdio.h>
int main()
{
    int t,i,l,v,o;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&l,&v,&o);
        l=l*l;
        v=v*v;
        o=o*o;
        if((l+v)==o||(l+o)==v||(v+o)==l) printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}
