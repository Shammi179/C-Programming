#include<stdio.h>
int main()
{
    char s[501];
    gets(s);
    int l;
    l=strlen(s);
    if(l<=80) printf("YES\n");
    else printf("NO\n");
}
