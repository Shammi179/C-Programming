#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000]="Flowers Flourish from France";
    char s2[1000]="Sam Simmonds speaks softly";
    char s3[1000]="Peter pIckEd pePPers";
    char s4[1000]="truly tautograms triumph";
    char s[1000];
    while(gets(s))
    {
        if(s[0]=='*') break;
        else
        {
            if(strcmp(s,s1)==0||strcmp(s,s2)==0||strcmp(s,s3)==0||strcmp(s,s4)==0)
                printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}
