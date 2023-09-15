#include<stdio.h>
int main()
{
    char s[100];
    int i,v=0;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='e'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
    }
    printf("%d\n",v);
}
