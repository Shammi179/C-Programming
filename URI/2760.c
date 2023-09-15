#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int la,lb,lc,i;
    gets(a);
    gets(b);
    gets(c);
    la=strlen(a);
    lb=strlen(b);
    lc=strlen(c);
    printf("%s%s%s\n",a,b,c);
    printf("%s%s%s\n",b,c,a);
    printf("%s%s%s\n",c,a,b);
    if(la>10)
    {
        for(i=0;i<10;i++)
            printf("%c",a[i]);
    }
    if(la<=10)
        printf("%s",a);
    if(lb>10)
    {
        for(i=0;i<10;i++)
            printf("%c",b[i]);
    }
    if(lb<=10)
        printf("%s",b);
      if(lc>10)
    {
        for(i=0;i<10;i++)
            printf("%c",c[i]);
    }
    if(lc<=10)
        printf("%s",c);

        printf("\n");
}
