#include<stdio.h>
int main()
{
    int a,i,f=0;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        if(i%3!=0)
            f++;
    }
    printf("%d\n",f);
    return 0;
}
