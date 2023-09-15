#include<stdio.h>
int main()
{
    int i,a,b,s=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(i=a; i<=b; i++)
    {
        if(i%13!=0)
        {
            s+=i;

        }
    }
    printf("%d\n",s);

}
