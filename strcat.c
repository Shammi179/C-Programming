#include<stdio.h>
int main()
{
    char c1[100],c2[100];
    gets(c1);
    gets(c2);
    strcat(c1,c2);
    puts(c1);
    //without strcat
    char c3[100],c4[100];
    int i,j,l,L;
    gets(c3);
    gets(c4);
    l=strlen(c3);
    L=strlen(c4);
    printf("%s",c3);
    for(i=l,j=0;i<=l+L-1;i++,j++)
    {
        c3[i]=c4[j];
        printf("%c",c3[i]);
    }


}
