#include<stdio.h>
int main()
{
    int n,id1,id2,i,t,c;
    while(scanf("%d %d",&t,&id1)!=EOF)
    {
        c=0;
        for(i=0;i<t;i++)
        {
            scanf("%d %d",&id2,&n);
            if(id2==id1&&n==0)c++;
        }
        printf("%d\n",c);
    }
}
