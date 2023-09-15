#include<stdio.h>
int main()
{
    char s[501];
    gets(s);
    int l;
    l=strlen(s);
    if(l<=140) printf("TWEET\n");
    else printf("MUTE\n");
}
