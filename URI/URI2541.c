#include<stdio.h>
int main()
{
    int i,n,mx,mn,a,s;
    while(scanf("%d %d %d",&n,&mn,&mx)!=EOF)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            if(a>=mn&&a<=mx)
                s++;
        }
        printf("%d\n",s);
    }
}
