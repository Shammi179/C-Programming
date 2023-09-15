#include<stdio.h>
int main()
{
    char s[100];
    int i,l=0,c=0,w=1;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            c++;
       else if(s[i]>='a'&&s[i]<='z')
            l++;
        else if(s[i]==' ')
                    w++;
    }
    printf("Words: %d\nCapital Letters: %d\nLowercase Letters: %d\n",w,c,l);

}
