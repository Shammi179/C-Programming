#include<stdio.h>
int main()
{
    int t,a,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        if(a<=10) printf("0 %d\n",a);
        else printf("10 %d\n",a-10);
    }
    return 0;
}
