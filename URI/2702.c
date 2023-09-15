#include<stdio.h>
int main()
{
    int ca,ba,pa,cb,bb,pb,sub,sum=0;
    scanf("%d %d %d %d %d %d",&ca,&ba,&pa,&cb,&bb,&pb);
    if(ca<cb)
    {
        sub=cb-ca;
        sum+=sub;
    }
    if(ba<bb)
    {
        sub=bb-ba;
        sum+=sub;
    }
    if(pa<pb)
    {
        sub=pb-pa;
        sum+=sub;
    }
    printf("%d\n",sum);
    return 0;
}
