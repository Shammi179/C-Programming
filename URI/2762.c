#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[500],s2[500];
    int i,l,S=0,j;
    gets(s);
    if(s[0]=='-')
    {
        printf("-");
        l=strlen(s);
        for(i=1,j=0; s[i]<'.'; i++,j++)
        {
            s1[j]=s[i];
            S++;
        }
        for(i=S,j=0; i<l,j<l; i++,j++)
            s2[j]=s[i];
        if(s2[0]=='0')
        {
            for(j=1; j<strlen(s2); j++)
                printf("%c",s2[j]);
                printf(".");
                printf("%s",s1);

        }
        else
        {
            printf("%s.%s",s2,s1);
        }
        printf("\n");
    }
    else
    {
        l=strlen(s);
        for(i=0,j=0; s[i]<'.'; i++,j++)
        {
            s1[j]=s[i];
            S++;
        }
        for(i=S,j=0; i<l,j<l; i++,j++)
            s2[j]=s[i];
        if(s2[0]=='0')
        {
            for(j=1; j<strlen(s2); j++)
                printf("%c",s2[j]);
                printf(".");
                printf("%s",s1);

        }
        else
        {
            printf("%s.%s",s2,s1);
        }
        printf("\n");

    }


}
