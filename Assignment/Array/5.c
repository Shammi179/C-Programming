#include<stdio.h>
int main()
{
    int i,s=0,ar[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<5;i++)
    {
        s+=ar[i];
    }
    printf("%d\n",s);
    return 0;
}
