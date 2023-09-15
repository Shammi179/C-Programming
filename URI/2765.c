#include<stdio.h>
#include<string.h>
int main()
{
    int i,l=0,c,j;
    char s[1000];
    gets(s);
        l=strlen(s);
        c=1;
        for(i=0;i<l;i++)
        {
           if(s[i]==',')
            break;
           else
            c++;
        }
        for(i=0;i<c-1;i++)
            printf("%c",s[i]);
        printf("\n");
        for(j=c;j<l;j++)
            printf("%c",s[j]);
            printf("\n");
}
