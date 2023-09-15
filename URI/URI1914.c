#include<stdio.h>
int main()
{
    int a,i;
    long long int b,c,s;
    char st1[100],st2[10],st3[100],st4[10];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s %s %s %s",st1,st2,st3,st4);
        scanf("%lld %lld",&b,&c);
        s=b+c;
        if(s%2==0)
        {
            if(st2[0]=='P')printf("%s\n",st1);
            else printf("%s\n",st3);
        }
        else if(s%2!=0)
        {
            if(st2[0]=='P')printf("%s\n",st3);
            else printf("%s\n",st1);
        }

    }
}
