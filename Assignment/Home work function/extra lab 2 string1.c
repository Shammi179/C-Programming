#include<stdio.h>
int main()
{
    int i,j;
    char f[30],l[30],t[60];
    printf("Enter first string:");
    gets(f);
    printf("Enter last string:");
    gets(l);
    while(f[i]!='\0')
    {
        i++;
    }
    while(l[j]!='\0')
    {
        f[i]=l[j];
        j++;
        i++;
    }
    f[i]='\0';
    printf("STRING : %s",f);
    return 0;
}
