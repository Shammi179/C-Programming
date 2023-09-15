#include<stdio.h>
int main()
{
    int t,n,i;
    char s[50];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s %d",s,&n);
        if(s[0]=='T'&&s[1]=='h'&&s[2]=='o'&&s[3]=='r') printf("Y\n");
        else printf("N\n");
    }
}
