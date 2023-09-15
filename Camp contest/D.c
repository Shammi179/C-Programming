#include<stdio.h>
int main()
{
    int n,i,l=0;
    char st[101];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
         gets(st);
         l=strlen(st);
          if(l<=10)
           puts(st);
         else if(l>10){
           printf("%c%d%c\n",st[0],l-2,st[l-1]);
    }
    }
    return 0;



}
