#include<stdio.h>
int main()
{
    int i,j,n,r1,r2;
    scanf("%d",&n);

    for(i=11; i<=99; i++)
    {
        r1=i%10;
        r2=(i/10)%10;
        if((r1*r2)==n)
        {
            printf("%d\n",i);
            break;
        }
        r1=0;r2=0;
    }
    if(r1==0&&r2==0)
        printf("-1\n");
}
