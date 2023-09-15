#include<stdio.h>
int main()
{
    char str[100],ch;
    int i=0,v=0,c=0,d=0,w=0,o=0;
    gets(str);

    while(ch=str[i]!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            v++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')&&ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u'||ch!='A'||ch!='E'||ch!='I'||ch!='O'||ch!='U')
            c++;
        else if(ch>='0'&&ch<='9')
            d++;
        else if(ch==' ')
            w++;
        else
            o++;
        i++;

    }
    w++;
    printf("Vowel =%d\nConsonant = %d\nword = %d\nDigit = %d\nOthers = %d\n",v,c,w,d,o);
    return 0;
}
