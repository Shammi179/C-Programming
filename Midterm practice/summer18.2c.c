#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d %d",&a,&b);
    if(a%2!=0)a+=1;
    for(i=a;i<=b;i+=2)
    {
        sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
