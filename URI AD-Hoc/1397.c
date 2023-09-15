#include<stdio.h>
int main()
{
    int t,a,b,i,fp,sp;
    while(scanf("%d",&t))
    {
        if(t==0) break;
        else
        {
            fp=0;
            sp=0;
            for(i=0;i<t;i++)
            {
                scanf("%d %d",&a,&b);
                if(a>b) fp++;
                else if(a<b) sp++;
            }
            printf("%d %d\n",fp,sp);
        }
    }
    return 0;
}
