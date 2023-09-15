#include<stdio.h>
int main()
{
    char s[10];
    gets(s);
    int i;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>'0'&&s[i]<='9')
            printf("%c",s[i]);
    }
}
