#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    int n,i,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        for(j=0;j<=strlen(s);j++)
        {
           if(s[j]!='\0')c++;
        }
        printf("%.2f\n",(float)(c*0.01));
        c=0;

    }


}
