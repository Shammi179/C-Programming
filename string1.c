#include<stdio.h>
int main()
{
    char str[100];
    int i,count=0,l;
    gets(str);
    l=strlen(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ');
        count++;
        i++;
    }
    printf("%d\n",l-count);
    return 0;
}
