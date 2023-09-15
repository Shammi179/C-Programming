#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)

    {
        if(a==1)
            printf("0\n");
        else if(a%2==0)
            printf("%d\n",a/2);
        else if(a%2!=0)
            printf("%d\n",(a+1)/2);
    }
}
