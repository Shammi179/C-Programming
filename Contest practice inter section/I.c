#include<stdio.h>
int main()
{
    char s[100];
    int i;
    for(i=1;;i++)
    {
        gets(s);
        if(strcmp(s,"*")==0)
            break;
            if(strcmp(s,"Hajj")==0)
                printf("Case %d: Hajj-e-Akbar\n",i);
           else if (strcmp(s,"Umrah")==0)
                printf("Case %d: Hajj-e-Asghar\n",i);
    }
return 0;
}
