#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100001];
    char s2[100001];
    getchar();
    gets(s1);
    gets(s2);
    int l,i,c=0;
    l=strlen(s1);
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]>=65&&s1[i]<=90) s1[i]=s1[i]+32;
    }
    for(i=0;s2[i]!='\0';i++)
    {
         if(s2[i]>=65&&s2[i]<=90) s2[i]=s2[i]+32;
    }
    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
    {
        if(s1[i]==s2[i]) c++;
    }
    if(c==l)printf("YES\n");
    else printf("NO\n");
    return 0;

}
