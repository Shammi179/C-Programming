#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    while(gets(s))
    {
        if(s[0]=='e') printf("ingles\n");
    else if(s[0]=='d') printf("frances\n");
    else if(s[0]=='n') printf("portugues\n");
    else  printf("caiu\n");
    }
    return 0;
}
