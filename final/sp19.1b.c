#include<stdio.h>
int main()
{
    char str[50]="You are not serious! Are you?";
    puts(str);
    char *lol=str;
    lol++;
    printf("%s\n",lol);
    str[10]='\0';
    ++lol;
    printf("%s | %s\n",lol++,str);
}
