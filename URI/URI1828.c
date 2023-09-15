#include<stdio.h>
int main()
{
    char s1[100],s2[10];
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s %s",s1,s2);
        if(strcmp(s1,s2)==0)
            printf("Caso #%d: De novo!\n",i);
        else if(s1[2]=='s'&&(s2[2]=='p'||s2[2]=='g'))
            printf("Caso #%d: Bazinga!\n",i);
        else if(s1[2]=='p'&&(s2[2]=='d'||s2[2]=='o'))
            printf("Caso #%d: Bazinga!\n",i);
        else if(s1[2]=='d'&&(s2[2]=='g'||s2[2]=='s'))
            printf("Caso #%d: Bazinga!\n",i);
        else if(s1[2]=='g'&&(s2[2]=='o'||s2[2]=='p'))
            printf("Caso #%d: Bazinga!\n",i);
        else if(s1[2]=='o'&&(s2[2]=='s'||s2[2]=='d'))
            printf("Caso #%d: Bazinga!\n",i);
        else printf("Caso #%d: Raj trapaceou!\n",i);
    }
    return 0;
}
