#include<stdio.h>
int main()
{
    int i,j,m,h,l,c=0;
    scanf("%d %d",&h,&l);
    for(i=l;i<=h;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j!=0)
            {
                c++;

            if(c==1) printf("%d",i);
            m=i;
            }
        }
    }
    printf("\n%d",m);
    return 0;
}
