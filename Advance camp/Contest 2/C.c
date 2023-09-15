#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,h,e,l;
    char s[100009];
    while(scanf("%[^\n]",s)!=EOF)
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]==91)
                h=i;
            if(s[i]==93)
                e=i;
            for(j=h;j<e;j++)
            {
                printf("%c",s[j]);
            }
        }
    }
}
