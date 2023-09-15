#include<stdio.h>
int main()
{
    int i,a,b,r;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(i=1;i<=a&&i<=b;i++)
    {
        r=a%b;
        if(r==0){
            printf("GCD = %d\n",b);
            break;}
        else
        {
          a=b;
          b=r;
        }
    }
    return 0;
}
