#include<stdio.h>
int main()
{
    char s[100];
    int w=1,sp=0,f=0,i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' '){
            sp++;
            w++;}
        else if(s[i]=='.')
            f++;
    }
    printf("Number of Words: %d\nNumber of White Spaces: %d\nNumber of Full Stops: %d\n",w,sp,f);
    return 0;
}
