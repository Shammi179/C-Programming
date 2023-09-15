#include<stdio.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]=='z'){
            s[i]='a';
            printf("%c",s[i]);}
        else if (s[i]!=' '&&s[i]!='\0')printf("%c",s[i]+1);
        else if(s[i]==' '||s[i]=='\0') printf("%c",s[i]);
        }
}
