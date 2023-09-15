#include<stdio.h>
int main()
{
    char a[100],i,c=0;
    scanf("%s",a);
    for(i=0;i<=strlen(a); i++)
    {
        if(a[i]=='1')
            c++;
    }
        if(c%2!=0) printf("%s1\n",a);
        else printf("%s0\n",a);
        return 0;
}
