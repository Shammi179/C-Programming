#include<stdio.h>
int main()
{
    char str[100];
    int i,l;
    gets(str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        printf("%c\n",str[i]);
    }
}
