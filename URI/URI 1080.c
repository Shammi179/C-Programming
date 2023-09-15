#include<stdio.h>
int main()
{
    int a,i,p,h=0;
    for(i=1; i<=100; i++)
    {
        scanf("%d",&a);
        if(a>h)
        {
            h=a;
            p=i;
        }

    }
    printf("%d\n%d\n",h,p);
}
