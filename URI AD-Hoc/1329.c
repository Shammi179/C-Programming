#include<stdio.h>
int main()
{
    int t,n,i,m,j;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0) break;
        else
        {
            m=0;
            j=0;
            for(i=0;i<t;i++)
            {
                scanf("%d",&n);
                if(n==0) m++;
                else if(n==1) j++;
            }
            printf("Mary won %d times and John won %d times\n",m,j);

        }
    }
}
