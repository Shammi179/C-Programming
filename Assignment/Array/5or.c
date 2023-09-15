#include<stdio.h>
int main()
{
    int i,s=0,ar[5];
    for(i=0; i<5; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<5; i++)
    {
        if(ar[i]<0)
        {
            ar[i]=0;
        }
        s+=ar[i];
    }
    printf("%d\n",s);
    return 0;
}

