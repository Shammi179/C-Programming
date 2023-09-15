#include<stdio.h>
int main()
{
    char str1[100],str[100];
    int i,l,j;
    gets(str);
    l=strlen(str);
    for(i=l-1,j=0;i>=0;i--,j++)
    {
        str1[j]=str[i];
    }
    str1[j]='\0';
    puts(str1);
    char s[190];
    int x,l1;
    gets(s);
    l1=strlen(s);
    for(x=l1-1;x>=0;x--)
    {
        printf("%c",s[x]);
    }
}
