#include<stdio.h>
int main()
{
    char s[1000];
    int i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        printf("%c",s[i]);
    }
}
