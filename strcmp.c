#include<stdio.h>
int main()
{
    char s1[100],s2[100];
    int d;
    gets(s1);
    gets(s2);
    d=strcmp(s1,s2);
    if(d==0)
        printf("equal\n");
    else printf("not equal\n");
    printf("%d",d);
}
