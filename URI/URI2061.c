#include<stdio.h>
int main()
{
    int n,m,i;
    char a[100];
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%s",a);
        if(a[0]=='f')
            n++;
        else n--;
    }
    printf("%d\n",n);
}
