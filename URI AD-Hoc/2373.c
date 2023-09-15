#include<stdio.h>
int main()
{
    int t,c,g,s=0,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&c,&g);
        if(c>g) s+=g;
    }
    printf("%d\n",s);
}
