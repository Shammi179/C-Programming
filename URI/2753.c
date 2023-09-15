#include<stdio.h>
int main()
{
    int i;
    char s;
    for(i=97,s='a';i<=122,s<='z';i++,s++)
        printf("%d e %c\n",i,s);
    return 0;
}
