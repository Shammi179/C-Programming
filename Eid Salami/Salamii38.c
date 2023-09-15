#include<stdio.h>
int main()
{
    int a,i,u,l,j,c,d=0,k;
    printf("Input Lower Limit : ");
    scanf("%d",&l);
    printf("Input Upper Limit : ");
    scanf("%d",&u);
    printf("Prime numbers between %d-%d:\n",l,u);
    if(l==1) l=l+1;
    for(i=l;i<=u;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            d++;
            if(d>1)printf(",");
            printf("%d",i);
        }
    }
    printf("\n");
    return 0;
}
