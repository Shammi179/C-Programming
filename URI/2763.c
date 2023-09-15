#include<stdio.h>
int main()
{
    char s[20];
    while(scanf("%s",s)!=EOF){
    printf("%c%c%c\n",s[0],s[1],s[2]);
    printf("%c%c%c\n",s[4],s[5],s[6]);
    printf("%c%c%c\n",s[8],s[9],s[10]);
    printf("%c%c\n",s[12],s[13]);}
    return 0;
}
