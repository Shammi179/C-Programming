#include<stdio.h>
int main()
{
    char s[100],d[100];
    int i;
    gets(s);
    for(i=0;i<=strlen(s);i++)
        d[i]=s[i];
    printf("Destination string : %s\n",d);

}
